#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EItemId.h"
#include "ESoundPan.h"
#include "EPackageRingNumColor.h"
#include "RaceUISubItemIcon.generated.h"

class UCanvasPanel;
class UHorizontalBox;
class UImage;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubItemIcon : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemId, UTexture2D*> ItemId_TextureMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemId, UTexture2D*> ItemIdTriple_TextureMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemId, UTexture2D*> ItemIdDouble_TextureMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemId, UTexture2D*> ItemIdSingle_TextureMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundPan UISoundPan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* RingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* RingNum_Addtive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Canvas_Panel_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Canvas_Panel_ItemIconRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* ArdGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* PackageRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ControllerButtonIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ItemIconMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ItemIconAddtiveMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPackageRingNumColor, UMaterialInstance*> PackageRingNumColorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPackageRingNumColor, UMaterialInstance*> PackageRingNumColorMaterial_Add;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPackageRingNumColor, UMaterialInstanceDynamic*> RingNumMaterialMap_100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPackageRingNumColor, UMaterialInstanceDynamic*> RingNumMaterialMap_10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPackageRingNumColor, UMaterialInstanceDynamic*> RingNumMaterialMap_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPackageRingNumColor, UMaterialInstanceDynamic*> RingNumMaterialMap_100_Add;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPackageRingNumColor, UMaterialInstanceDynamic*> RingNumMaterialMap_10_Add;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPackageRingNumColor, UMaterialInstanceDynamic*> RingNumMaterialMap_01_Add;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> PackageRingNumDigitImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> PackageRingNumDigitImage_Add;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* AttributeFrameMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* AttributIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* AttributIconMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemIdIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMainIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLotteryingAnim;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopAnimPlaying;
    
public:
    URaceUISubItemIcon();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopCountDownBlink();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartCountDownBlink();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupPackageRing();
    
    UFUNCTION(BlueprintCallable)
    void SetRingNumVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetRingNum(int32 InRingCount);
    
    UFUNCTION(BlueprintCallable)
    void SetLotteryDisplayItemIds(const TArray<uint8> ItemIds);
    
    UFUNCTION(BlueprintCallable)
    void SetItemIdTexture(const TMap<EItemId, UTexture2D*>& InItemId_TextureMap);
    
    UFUNCTION(BlueprintCallable)
    void SetItemIdIndex(int32 InItemIdIndex, int32 InRemainCount, bool bIgnoreAttribute, bool bOnLottery);
    
    UFUNCTION(BlueprintCallable)
    void SetAttributeColorIndex(int32 InAttributeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayLoopAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishedOutAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishedInAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishedDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LotterySeqStart(bool LotterySound);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LotteryDecideFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LotteryAnimStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LotteryAnimEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ItemLostAnimStart(bool bHideIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetRandomLotteryDisplayItemId();
    
    UFUNCTION(BlueprintCallable)
    void FireUseAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayHideAnim(bool Display);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseLottery();
    
};


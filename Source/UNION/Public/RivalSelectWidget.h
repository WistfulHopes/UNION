#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "CommonUserWidget.h"
#include "DriverData.h"
#include "RivalSelectWidget.generated.h"

class UCharaSelectWindow;
class UCommonRivalLevelWidget;
class UMenuInputRecieveObject;
class UObject;
class URivalSelectBonusProgressWidget;
class URivalSelectCharaCutInWidget;
class URivalSelectCharaInfoWidget;
class URivalSelectNextRivalMarkWidget;
class UTexture2D;
class UUnionUITextBlock;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API URivalSelectWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRivalSelectWidgetOnRivalIconInAnimFinished);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRivalSelectWidgetOnDecisionAnimFinished);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRivalSelectWidgetOnDecision, EDriverId, DriverId, uint8, RivalLevel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRivalSelectWidgetOnCanceled, uint8, RivalLevel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRivalSelectWidgetOnBattleResultFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalSelectWidgetOnDecision OnDecisionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalSelectWidgetOnDecisionAnimFinished OnDecisionAnimFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalSelectWidgetOnCanceled OnCanceledEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalSelectWidgetOnBattleResultFinished OnBattleResultFinishEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalSelectWidgetOnRivalIconInAnimFinished OnRivalIconInAnimFinishEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDriverId, TSoftObjectPtr<UTexture2D>> StickerTmbDriverId_TextureMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDriverId, TSoftObjectPtr<UTexture2D>> StickerTextureDriverId_TextureMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCharaSelectWindow* _CharaSelectWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URivalSelectCharaCutInWidget* _CharaCutInWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URivalSelectCharaInfoWidget* _CharaInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URivalSelectNextRivalMarkWidget* _NextRivalMarkWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URivalSelectBonusProgressWidget* _BonusProgressWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonRivalLevelWidget* _RivalLevelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* _WinInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUnionUITextBlock* _NumKnockdownCharaTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* _InputReceiver;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RivalSelect_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RivalSelect_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RivalSelect_Out;
    
public:
    URivalSelectWidget();

    UFUNCTION(BlueprintCallable)
    void SetupBattleResult(const EDriverId RivalDriverId, uint8 InRivalLevel, uint8 InBaseRivalLevel, const TArray<uint8>& InSpeedClassTopKnockoutArray);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDebugFlags(const bool SetEnabled, const bool SetPlayRivalIconMax);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRightShoulderPressed(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnLeftShoulderPressed(UObject* Object);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDecision(int32 PlayerControllerIndex, int32 CharaIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCanceled(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonFocused(int32 PlayerControllerIndex, int32 CharaIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRivalLevelEnhanced() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugPlayAnimRivalIconIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetSelectedRivalLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDriverId GetSelectedRivalDriverId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> GetRivalTopKnockdownLevelArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDriverId GetFocusDriverId() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDriverData(const EDriverId DriverId, bool& bFind, FDriverData& DriverData) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetBaseRivalLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginGrandPrixBattleResult();
    
};


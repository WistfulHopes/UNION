#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EDriverId.h"
#include "EItemId.h"
#include "EUnionAttackItemInfoType.h"
#include "RaceUISubApproachWarning.generated.h"

class UCanvasPanel;
class UImage;
class UMaterialInstanceDynamic;
class USoundAtomCue;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubApproachWarning : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ItemIconMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ItemIconShadowMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemId, UTexture2D*> ItemIdSingle_TextureMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemId, UTexture2D*> ItemIdSingleShadow_TextureMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemId CurrentItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstJumpIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCue*> ApproachSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* JumpInSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRacerApproach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBeepEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRenderScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_ItemWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* WarningBlink_Add;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* WarningBlink_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ItemInComming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ItemJumpIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlinkSpeedRate;
    
    URaceUISubApproachWarning();

    UFUNCTION(BlueprintCallable)
    void UpdateRacerApproach(const float& ValueCM);
    
    UFUNCTION(BlueprintCallable)
    void UpdateItemEnemyApproach(const float& ValueCM);
    
    UFUNCTION(BlueprintCallable)
    void SetItemId(const int32& InItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDriverId(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackTypeandId(const EUnionAttackItemInfoType& InAttackType, const EItemId& InItemId);
    
    UFUNCTION(BlueprintCallable)
    void OnRemoveApproachWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnPause(bool bInPause);
    
    UFUNCTION(BlueprintCallable)
    void InitRacerApproachSetting();
    
    UFUNCTION(BlueprintCallable)
    void InitItemEnemyApproachSetting(const float& InMaxScale, EUnionAttackItemInfoType AttackItemInfoType, const uint8& AttackItemId);
    
};


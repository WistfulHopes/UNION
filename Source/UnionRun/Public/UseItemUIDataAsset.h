#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EItemId.h"
#include "UseItemUIDataAsset.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UUseItemUIDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisableUIAdvancedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemId> TargetItemId_RunOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemId> TargetItemId_PerformanceAlart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemId> TargetItemId_PerformanceAttack_Common;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemId> TargetItemId_PerformanceAttack_ExcludeWarpRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemId> TargetItemId_BodyCut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemId> TargetItemId_KingBoomBoo;
    
    UUseItemUIDataAsset();

};


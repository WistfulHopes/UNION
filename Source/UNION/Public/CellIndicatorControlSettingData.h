#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EKeyConfigOperationType.h"
#include "EMenuControllerViewType.h"
#include "EOptionLocalPlayerNumber.h"
#include "CellIndicatorControlSettingData.generated.h"

UCLASS(Blueprintable)
class UNION_API UCellIndicatorControlSettingData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> InverseAccept;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMenuControllerViewType, FText> ButtonDisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EOptionLocalPlayerNumber, FText> LocalPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> AssistHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> AssistAccelerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> AssistAirTrick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> GyroAssist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> ForceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FText> ForceFeedback_4Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKeyConfigOperationType, FText> KeyOperationType_CS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKeyConfigOperationType, FText> KeyOperationType_PC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> FlyModeReverse;
    
    UCellIndicatorControlSettingData();

};


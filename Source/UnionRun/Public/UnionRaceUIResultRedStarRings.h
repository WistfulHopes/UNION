#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EStageId.h"
#include "ERedStarRingAcquisitionType.h"
#include "ERedStarRingUIType.h"
#include "ERedstarRingAllGetType.h"
#include "UnionRaceUIResultRedStarRings.generated.h"

class UUnionRaceUIResultRedStarRing;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API UUnionRaceUIResultRedStarRings : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERedStarRingUIType RedStarRingUIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionRaceUIResultRedStarRing*> RedStarRings;
    
    UUnionRaceUIResultRedStarRings();

    UFUNCTION(BlueprintCallable)
    void SetRedStarRingsRef(const TArray<UUnionRaceUIResultRedStarRing*>& Rings);
    
    UFUNCTION(BlueprintCallable)
    void ResetRings();
    
    UFUNCTION(BlueprintCallable)
    void PickUpRing(uint8 RingIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitRings(const TArray<bool>& Rings);
    
    UFUNCTION(BlueprintCallable)
    ERedstarRingAllGetType GetResultRedStarRingAllGetType(TArray<ERedStarRingAcquisitionType> AcquisitionType, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<ERedStarRingAcquisitionType> GetResultRedStarRingAcquisitionType(const EStageId InStageId);
    
    UFUNCTION(BlueprintCallable)
    TArray<ERedStarRingAcquisitionType> GetRaceRedStarRingAcquisitionType();
    
    UFUNCTION(BlueprintCallable)
    TArray<ERedStarRingAcquisitionType> GetOtherResultRedStarRingAcquisitionType(const int32 Index);
    
};


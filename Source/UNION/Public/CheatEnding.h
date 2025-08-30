#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EGrandPrixEndingId.h"
#include "CheatEnding.generated.h"

UCLASS(Blueprintable)
class UCheatEnding : public UObject {
    GENERATED_BODY()
public:
    UCheatEnding();

    UFUNCTION(BlueprintCallable, Exec)
    void RestrictStaffrollDataTableUnionNo(int32 UnionNo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReserveGrandPrixEnding(EGrandPrixEndingId GrandPrixEndingId);
    
};


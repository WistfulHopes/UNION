#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatMemoryProfile.generated.h"

UCLASS(Blueprintable)
class UNION_API UCheatMemoryProfile : public UObject {
    GENERATED_BODY()
public:
    UCheatMemoryProfile();

    UFUNCTION(BlueprintCallable, Exec)
    void AutoMemoryProfileCourses(const FString& platformTypeName, int32 startProfileStageIndex, int32 endProfileStageIndex);
    
};


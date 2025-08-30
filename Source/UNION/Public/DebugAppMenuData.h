#pragma once
#include "CoreMinimal.h"
#include "DebugAppMenuData.generated.h"

USTRUCT(BlueprintType)
struct FDebugAppMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSafe2ndLapCourse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOfflineResultForcePressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceUserCourse;
    
    UNION_API FDebugAppMenuData();
};


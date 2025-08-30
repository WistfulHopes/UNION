#pragma once
#include "CoreMinimal.h"
#include "UnionRaceResource.generated.h"

class UDataTable;
class UMaterialInstance;
class UMaterialParameterCollection;
class UTextureCube;

USTRUCT(BlueprintType)
struct UNION_API FUnionRaceResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TravelRingMainCourseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TravelRingAnotherCourseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TravelRingDataTable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* TravelRingMaterials[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureCube* TravelRingCubemaps[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> ShortcutRingMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* TravelRingMaterialParameterCollection;
    
    FUnionRaceResource();
};


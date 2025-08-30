#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UnionRaceStageDynamicData.generated.h"

class ULevel;
class UUnionBtCollisionBinaryAsset;
class UUnionComPathBinaryDataAsset;
class UUnionNavigationBinaryDataAsset;
class UUnionRunPathBinaryDataAsset;

USTRUCT(BlueprintType)
struct UNIONRUN_API FUnionRaceStageDynamicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevel*> ObjectLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionBtCollisionBinaryAsset* CollisionAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionNavigationBinaryDataAsset* NavigationAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionRunPathBinaryDataAsset* RunPathAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionComPathBinaryDataAsset* ComPathAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverwriteDirectionalLightParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverwriteDirectionalLightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor OverwriteDirectionalLightColor;
    
    FUnionRaceStageDynamicData();
};


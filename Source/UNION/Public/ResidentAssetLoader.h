#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ResidentAssetLoader.generated.h"

class UResidentDataAsset;
class UResourceHolder;

UCLASS(Blueprintable)
class UNION_API UResidentAssetLoader : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResidentDataAsset* ResidentDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceHolder* ResidentAssetHolder;
    
public:
    UResidentAssetLoader();

};


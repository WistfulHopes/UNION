#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LineGuidePathData.h"
#include "LineGuideDataAsset.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API ULineGuideDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Fixed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLineGuidePathData> LineGuideDatas0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLineGuidePathData> LineGuideDatas1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLineGuidePathData> LineGuideDatas2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLineGuidePathData> LineGuideDatas3;
    
    ULineGuideDataAsset();

    UFUNCTION(BlueprintCallable)
    void ClearData();
    
};


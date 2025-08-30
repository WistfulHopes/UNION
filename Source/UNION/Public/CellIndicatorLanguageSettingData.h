#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ECaptionVisible.h"
#include "ELanguage.h"
#include "CellIndicatorLanguageSettingData.generated.h"

UCLASS(Blueprintable)
class UNION_API UCellIndicatorLanguageSettingData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELanguage, FText> Language;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELanguage, FText> Voice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECaptionVisible, FText> Caption;
    
    UCellIndicatorLanguageSettingData();

};


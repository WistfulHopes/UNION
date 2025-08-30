#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "FestaBonusPointData.generated.h"

UCLASS(Blueprintable)
class UNION_API UFestaBonusPointData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GaugePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime endTime;
    
public:
    UFestaBonusPointData();

    UFUNCTION(BlueprintCallable)
    void StartFechDataUpdate();
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void FetchDataUpdate();
    
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
};


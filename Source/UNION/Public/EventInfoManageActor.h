#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FestaPointRewardUIData.h"
#include "EEventInfoPeriodType.h"
#include "EventInfoManageActor.generated.h"

class UFestaInfoWidgetBase;

UCLASS(Blueprintable)
class UNION_API AEventInfoManageActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventInfoPeriodType DisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFestaInfoWidgetBase* FestaInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsValidRewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFestaPointRewardUIData> PointRewardData;
    
public:
    AEventInfoManageActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupWorldMatchInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetupLegendCompeInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetupFestaInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Close();
    
};


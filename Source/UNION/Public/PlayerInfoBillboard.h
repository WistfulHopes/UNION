#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EDriverId.h"
#include "PlayerInfoBillboard.generated.h"

UCLASS(Blueprintable)
class UNION_API APlayerInfoBillboard : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateInterval;
    
    APlayerInfoBillboard(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateBillboardMonitor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeDriverInfo(const EDriverId& DriverId);
    
};


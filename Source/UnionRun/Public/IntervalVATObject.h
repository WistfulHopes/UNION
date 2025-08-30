#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IntervalVATObject.generated.h"

class UUnionVATMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AIntervalVATObject : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionVATMeshComponent* VATMeshComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventTime;
    
public:
    AIntervalVATObject(const FObjectInitializer& ObjectInitializer);

};


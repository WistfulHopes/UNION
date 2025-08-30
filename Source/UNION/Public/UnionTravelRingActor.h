#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraMessageInterface.h"
#include "EDomainNumber.h"
#include "ERaceType.h"
#include "ETravelRingType.h"
#include "Templates/SubclassOf.h"
#include "UnionTravelRingActor.generated.h"

class AUnionTravelRingLevelActor;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USoundAtomCue;
class UUnionStaticMeshComponent;
class UUnionTravelRingComponent;

UCLASS(Blueprintable)
class UNION_API AUnionTravelRingActor : public AActor, public ICameraMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETravelRingType TravelRingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* WhiteOutMaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* conflictMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* conflictRandom;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDomainNumber DomainNumber_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUnionTravelRingLevelActor* OwnerLevelActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionTravelRingComponent* TravelRingComponent_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionStaticMeshComponent*> TravelRingGates_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TravelRingGateClass_;
    
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionTravelRingComponent* TravelRingComponents_[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* WhiteoutEffectMaterials_[4];
    
public:
    AUnionTravelRingActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFXVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERaceType GetRaceType() const;
    

    // Fix for true pure virtual functions not being implemented
};


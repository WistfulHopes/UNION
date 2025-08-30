#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "UnionItemSkeletalMeshContainer.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONRUN_API UUnionItemSkeletalMeshContainer : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdate;
    
public:
    UUnionItemSkeletalMeshContainer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnEndItem();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginItem(AActor* OwnerActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginGame();
    
};


#include "SkeletalMeshActorBudgeted.h"
#include "UnionSkeletalMeshComponentBudgeted.h"

ASkeletalMeshActorBudgeted::ASkeletalMeshActorBudgeted(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UUnionSkeletalMeshComponentBudgeted>(TEXT("SkeletalMeshComponent0"))) {
    const FProperty* p_SkeletalMeshComponent = GetClass()->FindPropertyByName("SkeletalMeshComponent");
    (*p_SkeletalMeshComponent->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this)) = (USkeletalMeshComponent*)RootComponent;
}



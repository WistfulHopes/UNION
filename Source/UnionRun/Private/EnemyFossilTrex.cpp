#include "EnemyFossilTrex.h"
#include "UnionAtomComponent.h"
#include "GimmickStaticBodyComponent.h"
#include "UnionSkeletalMeshComponent.h"

AEnemyFossilTrex::AEnemyFossilTrex(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BreakSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("MoveUpSE"));
    this->bIsTypeB = false;
    this->DamageRecoveryTime = 0.50f;
    this->FossilBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("MainBodyComponent"));
    this->FossilRightHandBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("RightHandBodyComponent"));
    this->FossilLeftHandBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("LeftHandBodyComponent"));
    this->FossilWaistBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("WaistBodyComponent"));
    this->FossilChestBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("ChestBodyComponent"));
    this->LeftFootStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("LeftFootBody"));
    this->RightFootStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("RightFootBody"));
    this->AnimInstance = NULL;
    this->BreakSoundComponent->SetupAttachment(BodySkeletalMeshComponent);
    this->FossilBodyComponent->SetupAttachment(BodySkeletalMeshComponent);
    this->FossilChestBodyComponent->SetupAttachment(BodySkeletalMeshComponent);
    this->FossilLeftHandBodyComponent->SetupAttachment(BodySkeletalMeshComponent);
    this->FossilRightHandBodyComponent->SetupAttachment(BodySkeletalMeshComponent);
    this->FossilWaistBodyComponent->SetupAttachment(BodySkeletalMeshComponent);
    this->LeftFootStaticBodyComponent->SetupAttachment(BodySkeletalMeshComponent);
    this->RightFootStaticBodyComponent->SetupAttachment(BodySkeletalMeshComponent);
}



#include "GimmickDashRing.h"
#include "NiagaraComponent.h"
#include "UnionStaticMeshComponent.h"
#include "GimmickStaticBodyComponent.h"

AGimmickDashRing::AGimmickDashRing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->DashVelocity = 10.00f;
    this->_GimmickStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("GimmickStaticBodyComponent"));
    this->_StaticMeshComponent = (UUnionStaticMeshComponent*)RootComponent;
    this->_NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->_GimmickStaticBodyComponent->SetupAttachment(RootComponent);
    this->_NiagaraComponent->SetupAttachment(RootComponent);
}



#include "ItemAnchorPerformance.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"

AItemAnchorPerformance::AItemAnchorPerformance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_anchorMeshRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MeshRoot"));
    this->m_staticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("AnchorMesh"));
    this->m_rotateLocator = CreateDefaultSubobject<USceneComponent>(TEXT("RotateLocator"));
    this->m_connectedEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ConnectedEffect"));
    this->m_surfaceEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("SurfaceEffect"));
    this->m_dragSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("DragSound"));
    this->m_anchorModelLength = 0.00f;
    this->m_roadCheckRaycastLength = 500.00f;
    this->m_surfaceEffectActiveHeight = 10.00f;
    this->SurfaceEffectDataTable = NULL;
    this->m_dragGroundSoundCue = NULL;
    this->m_dragWaterSoundCue = NULL;
    this->m_anchorMeshRoot->SetupAttachment(RootComponent);
    this->m_connectedEffect->SetupAttachment(RootComponent);
    this->m_dragSound->SetupAttachment(RootComponent);
    this->m_rotateLocator->SetupAttachment(m_anchorMeshRoot);
    this->m_staticMeshComponent->SetupAttachment(m_rotateLocator);
    this->m_surfaceEffect->SetupAttachment(RootComponent);
}



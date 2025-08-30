#include "UnionStickerBase.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AUnionStickerBase::AUnionStickerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->IsInnerCollision = false;
    this->IsOuterCollision = false;
    this->Mid = NULL;
    this->MaterialInstance = NULL;
    this->MIDInside = NULL;
    this->MaterialInstanceInside = NULL;
    this->Texture = NULL;
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->StaticMeshComponentInside = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponentInside"));
    this->IsEnabledColorChange = false;
    this->IsEnabledFreeScale = false;
    this->IsRevU_ = false;
    this->IsRevV_ = false;
    this->bIsSavedRevU = false;
    this->IsNoSticker = true;
    this->IsEditRear = false;
    this->MoveRangeOut = false;
    this->bIsSavedExtraSticker = false;
    this->bIsEditSticker = false;
    this->bIsEditExtraSticker = false;
    this->SlotIndex = 0;
    this->IsDebugMove_ = false;
    this->IsRotate_ = 0;
    this->Margin_ = 0.10f;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
    this->StaticMeshComponentInside->SetupAttachment(RootComponent);
}

void AUnionStickerBase::TickSub(float DeltaTime) {
}

void AUnionStickerBase::SetupCollision() {
}

void AUnionStickerBase::SetTranslucentSortPriority(int32 SortPriority) {
}

void AUnionStickerBase::SetStickerTexture(UTexture* StickerTexture, bool IsCalcScale) {
}

void AUnionStickerBase::SetSimpleRender(bool IsSimple) {
}

void AUnionStickerBase::SetReverseV(const bool IsReverse) {
}

void AUnionStickerBase::SetReverseU(const bool IsReverse) {
}

void AUnionStickerBase::SetMargin(const float Margin) {
}

void AUnionStickerBase::SetColor(const FLinearColor& Color) {
}

void AUnionStickerBase::RemoveOverlapSticker(AActor* OtherActor) {
}

void AUnionStickerBase::HandleEndOverlapInside(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AUnionStickerBase::HandleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AUnionStickerBase::HandleBeginOverlapInside(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AUnionStickerBase::HandleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

FVector AUnionStickerBase::CalculateStickerAspect(const UTexture* StickerTexture) {
    return FVector{};
}

void AUnionStickerBase::BeginPlaySub() {
}

void AUnionStickerBase::AddStaticMeshComponent() {
}

void AUnionStickerBase::AddOverlapSticker(AActor* OtherActor) {
}



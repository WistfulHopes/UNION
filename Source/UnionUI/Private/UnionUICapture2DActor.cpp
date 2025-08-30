#include "UnionUICapture2DActor.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"

AUnionUICapture2DActor::AUnionUICapture2DActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bEnableCapture = true;
    this->PlayerControllerIndex = 0;
    this->Root = (USceneComponent*)RootComponent;
    this->SceneCapture2D = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCapture2D"));
    this->RenderTarget2D = NULL;
    this->SceneCapture2D->SetupAttachment(RootComponent);
}

void AUnionUICapture2DActor::SetShowOnlyActors(TArray<AActor*> ShowOnlyActors) {
}

void AUnionUICapture2DActor::RemoveShowOnlyActors_Multi(TArray<AActor*> InShowOnlyActors) {
}

void AUnionUICapture2DActor::RemoveShowOnlyActors(AActor* InShowOnlyActor) {
}

void AUnionUICapture2DActor::InitTexture(const int32& Width, const int32& Height) {
}

UTextureRenderTarget2D* AUnionUICapture2DActor::GetRenderTarget2D() const {
    return NULL;
}

void AUnionUICapture2DActor::DoCapture() {
}

void AUnionUICapture2DActor::ClearShowOnlyActors() {
}

void AUnionUICapture2DActor::AddShowOnlyActors(TArray<AActor*> InShowOnlyActors) {
}



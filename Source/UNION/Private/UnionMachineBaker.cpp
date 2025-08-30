#include "UnionMachineBaker.h"
#include "Components/SceneCaptureComponent2D.h"

AUnionMachineBaker::AUnionMachineBaker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USceneCaptureComponent2D>(TEXT("NewSceneCaptureComponent2D"))) {
    this->RenderTarget = NULL;
    this->Mid = NULL;
    this->StaticMeshComponent = NULL;
    this->Actor = NULL;
	SceneCaptureComponent = GetCaptureComponent2D();
    this->SceneCaptureComponent->SetupAttachment(RootComponent);
}



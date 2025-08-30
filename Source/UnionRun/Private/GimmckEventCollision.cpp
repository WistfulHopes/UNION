#include "GimmckEventCollision.h"
#include "Components/SceneComponent.h"
#include "ECourseObjColType.h"
#include "StaticBodyComponent.h"

AGimmckEventCollision::AGimmckEventCollision(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->ColType = ECourseObjColType::EventCollision;
    this->m_stageId = EStageId::STG1016;
    this->m_uniqueEventId = 0;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->StaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("StaticBody"));
    this->bNotifyRepeatedly = false;
    this->StaticBodyComponent->SetupAttachment(RootComponent);
}

void AGimmckEventCollision::SetEventId(EUnionEventId EventId) {
}



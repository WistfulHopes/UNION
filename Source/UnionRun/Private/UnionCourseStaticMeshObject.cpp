#include "UnionCourseStaticMeshObject.h"
#include "UnionStaticMeshComponent.h"

AUnionCourseStaticMeshObject::AUnionCourseStaticMeshObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	this->RootComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("コリジョン用スタティックメッシュ"));
}
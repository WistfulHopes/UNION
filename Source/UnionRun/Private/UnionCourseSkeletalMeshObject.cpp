#include "UnionCourseSkeletalMeshObject.h"
#include "UnionSkeletalMeshComponent.h"
#include "UnionStaticMeshComponent.h"

AUnionCourseSkeletalMeshObject::AUnionCourseSkeletalMeshObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	this->RootComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("表示用スタティックメッシュ"));
}

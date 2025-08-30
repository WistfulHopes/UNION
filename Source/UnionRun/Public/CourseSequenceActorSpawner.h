#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CourseSequenceSpawnActorInfo.h"
#include "UnionCourseObjectBase.h"
#include "CourseSequenceActorSpawner.generated.h"

class AActor;
class USceneComponent;

UCLASS(Blueprintable)
class UNIONRUN_API ACourseSequenceActorSpawner : public AUnionCourseObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCourseSequenceSpawnActorInfo> spawnActorInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> spawnActors;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
public:
    ACourseSequenceActorSpawner(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSize(FVector Size);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostSpawnSequenceActor();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetSpawnActor(int32 Index);
    
};


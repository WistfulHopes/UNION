#pragma once
#include "CoreMinimal.h"
#include "SceneCaptureComponentEx.h"
#include "UnionShortcutComponent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UUnionShortcutComponent : public USceneCaptureComponentEx {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwnerRingActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Source_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Destination_;
    
public:
    UUnionShortcutComponent(const FObjectInitializer& ObjectInitializer);

};


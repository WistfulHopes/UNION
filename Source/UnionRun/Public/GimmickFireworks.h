#pragma once
#include "CoreMinimal.h"
#include "UnionCourseObjectBase.h"
#include "GimmickFireworks.generated.h"

class UNiagaraComponent;
class USceneComponent;
class UUnionAtomComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AGimmickFireworks : public AUnionCourseObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* m_niagaraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* AtomComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NXIgnore;
    
public:
    AGimmickFireworks(const FObjectInitializer& ObjectInitializer);

};


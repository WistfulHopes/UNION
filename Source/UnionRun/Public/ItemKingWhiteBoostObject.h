#pragma once
#include "CoreMinimal.h"
#include "ItemObjectBase.h"
#include "ItemKingWhiteBoostObject.generated.h"

class UUnionAtomComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AItemKingWhiteBoostObject : public AItemObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxBoostTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_IntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* m_soundComponent;
    
    AItemKingWhiteBoostObject(const FObjectInitializer& ObjectInitializer);

};


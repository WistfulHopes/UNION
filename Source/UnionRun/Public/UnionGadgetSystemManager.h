#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnionGadgetSystemManager.generated.h"

class UGadgetParameterDataAsset;

UCLASS(Blueprintable)
class UNIONRUN_API UUnionGadgetSystemManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGadgetParameterDataAsset* m_gadgetParameter;
    
public:
    UUnionGadgetSystemManager();

};


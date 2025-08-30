#pragma once
#include "CoreMinimal.h"
#include "MachinePartsResource.h"
#include "MenuResourceElement.h"
#include "MachinePartsResourceElement.generated.h"

UCLASS(Blueprintable)
class UNION_API UMachinePartsResourceElement : public UMenuResourceElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachinePartsResource Resource;
    
public:
    UMachinePartsResourceElement();

};


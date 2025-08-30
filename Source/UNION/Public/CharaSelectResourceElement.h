#pragma once
#include "CoreMinimal.h"
#include "CharaSelectResource.h"
#include "MenuResourceElement.h"
#include "CharaSelectResourceElement.generated.h"

UCLASS(Blueprintable)
class UNION_API UCharaSelectResourceElement : public UMenuResourceElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaSelectResource CharaSelectResource;
    
public:
    UCharaSelectResourceElement();

};


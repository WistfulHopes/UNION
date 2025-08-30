#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnionGroupSystemManager.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class UNIONRUN_API UUnionGroupSystemManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> m_UIListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> m_GroupInfoListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_GroupColorOverlayMaterial;
    
public:
    UUnionGroupSystemManager();

};


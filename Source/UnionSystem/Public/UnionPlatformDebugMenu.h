#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EUnionOpenStoreResultType.h"
#include "UnionPlatformDebugMenu.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionPlatformDebugMenu : public UObject {
    GENERATED_BODY()
public:
    UUnionPlatformDebugMenu();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlatformStoreClose(EUnionOpenStoreResultType InType);
    
    UFUNCTION(BlueprintCallable)
    void OnGetAChievementEnd(float InValue);
    
};


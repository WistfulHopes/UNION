#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UnionUISequenceInterface.generated.h"

UINTERFACE(Blueprintable)
class UNIONUI_API UUnionUISequenceInterface : public UInterface {
    GENERATED_BODY()
};

class UNIONUI_API IUnionUISequenceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Close(bool bSelfRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Begin();
    
};


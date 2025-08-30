#pragma once
#include "CoreMinimal.h"
#include "UnionUIButtonBase.h"
#include "CommonMenuCrossButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCommonMenuCrossButton : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerControllerIndex;
    
public:
    UCommonMenuCrossButton();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerControllerIndex(const int32 InPlayerControllerIndex);
    
};


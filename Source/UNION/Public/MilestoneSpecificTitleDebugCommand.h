#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MilestoneSpecificTitleDebugCommand.generated.h"

class UMenuInputRecieveObject;

UCLASS(Blueprintable)
class UNION_API UMilestoneSpecificTitleDebugCommand : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* MenuInputReceiveObject;
    
public:
    UMilestoneSpecificTitleDebugCommand();

private:
    UFUNCTION(BlueprintCallable)
    void OnReleasedBackKey(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnPressedLeftShoulder(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnPressedBackKey(UObject* Object);
    
};


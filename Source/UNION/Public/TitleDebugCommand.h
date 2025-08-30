#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EUnionUIControlDir.h"
#include "TitleDebugCommand.generated.h"

class UInputMappingContext;
class UMenuInputRecieveObject;

UCLASS(Blueprintable)
class UNION_API UTitleDebugCommand : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* InputMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* MenuInputReceiveObject;
    
public:
    UTitleDebugCommand();

private:
    UFUNCTION(BlueprintCallable)
    void OnReleasedUp(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedRightShoulder(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedRight(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedLeftShoulder(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedLeft(UObject* Object, EUnionUIControlDir Dir);
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedDown(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnPressedUp(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnPressedRightShoulder(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnPressedRight(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnPressedLeftShoulder(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnPressedLeft(UObject* Object, EUnionUIControlDir Dir);
    
    UFUNCTION(BlueprintCallable)
    void OnPressedDown(UObject* Object);
    
};


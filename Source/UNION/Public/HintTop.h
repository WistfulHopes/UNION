#pragma once
#include "CoreMinimal.h"
#include "EAppControllerInputType.h"
#include "UnionUIInputWidget.h"
#include "HintTop.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UHintTop : public UUnionUIInputWidget {
    GENERATED_BODY()
public:
    UHintTop();

    UFUNCTION(BlueprintCallable)
    void OnSubMenuRightShoulderPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnSubMenuLeftShoulderPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnSubMenuBackKeyPressed();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeControllerInputType(EAppControllerInputType BeforeType, EAppControllerInputType AfterType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveRightHintTab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveLeftHintTab();
    
    UFUNCTION(BlueprintCallable)
    void ChangePlayTittleBgm(bool IsPlay);
    
};


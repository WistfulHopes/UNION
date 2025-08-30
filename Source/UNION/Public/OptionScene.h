#pragma once
#include "CoreMinimal.h"
#include "ECommonMenuButtonType.h"
#include "UnionUISceneBase.h"
#include "EOptionSequenceMainState.h"
#include "OptionScene.generated.h"

class UCommonMenuOptionButton;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UOptionScene : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommonMenuOptionButton*> OptionButtonArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Window_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Window_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Window_Out;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionSequenceMainState MainState;
    
public:
    UOptionScene();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupOption();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationIn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeSelectMainOption(const TArray<ECommonMenuButtonType>& BeltButtonTypeArr);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeOption();
    
};


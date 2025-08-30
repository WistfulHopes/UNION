#pragma once
#include "CoreMinimal.h"
#include "CommonMenuButtonBase.h"
#include "ETopMenuPlayMode.h"
#include "TopMenuPlayModeButton.generated.h"

class UTopMenuPlayerNumButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UTopMenuPlayModeButton : public UCommonMenuButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETopMenuPlayMode TopMenuPlayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTopMenuPlayerNumButton*> PlayerNumButtonArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FocusPlayerNum;
    
    UTopMenuPlayModeButton();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializePlayerNum();
    
};


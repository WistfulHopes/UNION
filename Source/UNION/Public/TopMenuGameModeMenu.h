#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ETopMenuGameMode.h"
#include "TopMenuGameModeMenu.generated.h"

class UCommonMenuSubMenu;
class UTopMenuGameModeButton;
class UUnionUIButtonBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UTopMenuGameModeMenu : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTopMenuGameModeButton*> ModeButtonArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIButtonBase* BackFocusButton;
    
    UTopMenuGameModeMenu();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupGameModeMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeGameModeMenu(const TArray<ETopMenuGameMode>& BeltButtonTypeArr, UCommonMenuSubMenu* SubMenu);
    
};


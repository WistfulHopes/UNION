#pragma once
#include "CoreMinimal.h"
#include "CommonMenuButtonBase.h"
#include "ETopMenuGameMode.h"
#include "TopMenuGameModeButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UTopMenuGameModeButton : public UCommonMenuButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETopMenuGameMode TopMenuGameMode;
    
    UTopMenuGameModeButton();

};


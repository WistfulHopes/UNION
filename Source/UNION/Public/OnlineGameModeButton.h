#pragma once
#include "CoreMinimal.h"
#include "CommonMenuButtonBase.h"
#include "EOnlineGameMode.h"
#include "OnlineGameModeButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UOnlineGameModeButton : public UCommonMenuButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOnlineGameMode OnlineGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBackFlag;
    
    UOnlineGameModeButton();

};


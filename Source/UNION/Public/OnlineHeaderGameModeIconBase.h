#pragma once
#include "CoreMinimal.h"
#include "UnionUISceneBase.h"
#include "EOnlineGameMode.h"
#include "OnlineHeaderGameModeIconBase.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UOnlineHeaderGameModeIconBase : public UUnionUISceneBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ModeIcon;
    
public:
    UOnlineHeaderGameModeIconBase();

    UFUNCTION(BlueprintCallable)
    void SetOnlineModeIcon(EOnlineGameMode InGameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayOnlineModeIconAnim(bool bIsInAnim);
    
};


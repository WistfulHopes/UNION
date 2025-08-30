#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "EDriverId.h"
#include "LobbySceneBase.h"
#include "LobbySceneOnline.generated.h"

class UImage;
class UOnlinePlayerNameButton;
class UUnionRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API ULobbySceneOnline : public ULobbySceneBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOnlinePlayerNameButton* PlayerNameButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* StageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DmyIcon;
    
public:
    ULobbySceneOnline();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisibilitySelectCourseResultEvent(ESlateVisibility InVisibility, bool HiddenPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadResultCharaIcon(EDriverId InResultDriverId);
    
};


#pragma once
#include "CoreMinimal.h"
#include "EBlockPlayerState.h"
#include "EGadgetId.h"
#include "UnionUISceneBase.h"
#include "LobbyPlayerData.h"
#include "PlayerDetail.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPlayerDetail : public UUnionUISceneBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGadgetId> DisableGadgetIdList;
    
public:
    UPlayerDetail();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUpData(const FLobbyPlayerData& InRacerData, bool bIsOwn, EBlockPlayerState InBlockType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDisableGadgetList(const TArray<EGadgetId>& InDisableGadgetList);
    
};


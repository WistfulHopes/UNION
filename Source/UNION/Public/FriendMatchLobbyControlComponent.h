#pragma once
#include "CoreMinimal.h"
#include "CustomMatchLobbyControlComponent.h"
#include "Templates/SubclassOf.h"
#include "FriendMatchLobbyControlComponent.generated.h"

class UFriendMatchLobbyContext;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UFriendMatchLobbyControlComponent : public UCustomMatchLobbyControlComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFriendMatchLobbyContext> LobbyContextClass;
    
public:
    UFriendMatchLobbyControlComponent(const FObjectInitializer& ObjectInitializer);

};


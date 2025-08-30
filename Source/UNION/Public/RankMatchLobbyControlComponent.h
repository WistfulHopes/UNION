#pragma once
#include "CoreMinimal.h"
#include "NetLobbyControlComponent.h"
#include "Templates/SubclassOf.h"
#include "RankMatchLobbyControlComponent.generated.h"

class URankMatchLobbyContext;
class URankMatchMatchmakingContext;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URankMatchLobbyControlComponent : public UNetLobbyControlComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URankMatchLobbyContext> LobbyContextClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URankMatchMatchmakingContext> MatchmakingContextClass;
    
public:
    URankMatchLobbyControlComponent(const FObjectInitializer& ObjectInitializer);

};


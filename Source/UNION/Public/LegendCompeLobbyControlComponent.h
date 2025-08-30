#pragma once
#include "CoreMinimal.h"
#include "NetLobbyControlComponent.h"
#include "Templates/SubclassOf.h"
#include "LegendCompeLobbyControlComponent.generated.h"

class ULegendCompeLobbyContext;
class ULegendCompeMatchmakingContext;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API ULegendCompeLobbyControlComponent : public UNetLobbyControlComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULegendCompeLobbyContext> LobbyContextClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULegendCompeMatchmakingContext> MatchmakingContextClass;
    
public:
    ULegendCompeLobbyControlComponent(const FObjectInitializer& ObjectInitializer);

};


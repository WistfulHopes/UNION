#pragma once
#include "CoreMinimal.h"
#include "NetLobbyControlComponent.h"
#include "Templates/SubclassOf.h"
#include "FestaLobbyControlComponent.generated.h"

class UFestaLobbyContext;
class UFestaMatchmakingContext;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UFestaLobbyControlComponent : public UNetLobbyControlComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFestaLobbyContext> LobbyContextClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFestaMatchmakingContext> MatchmakingContextClass;
    
public:
    UFestaLobbyControlComponent(const FObjectInitializer& ObjectInitializer);

};


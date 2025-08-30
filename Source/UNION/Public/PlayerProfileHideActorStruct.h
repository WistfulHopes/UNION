#pragma once
#include "CoreMinimal.h"
#include "PlayerProfileHideActorStruct.generated.h"

USTRUCT(BlueprintType)
struct FPlayerProfileHideActorStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LobbyIndexList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHideCubot;
    
    UNION_API FPlayerProfileHideActorStruct();
};


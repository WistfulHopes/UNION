#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELobbyType.h"
#include "UnionLobbyUtils.generated.h"

class ULobbyJoinInfo;

UCLASS(Blueprintable)
class UNION_API UUnionLobbyUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionLobbyUtils();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELobbyType GetLobbyTypeFromJoinInfo(const ULobbyJoinInfo* JoinInfo);
    
};


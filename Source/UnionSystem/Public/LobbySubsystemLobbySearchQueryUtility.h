#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELobbySubsystemLobbySearchQueryFilterComparator.h"
#include "LobbySubsystemLobbySearchQuery.h"
#include "LobbySubsystemLobbySearchQueryUtility.generated.h"

UCLASS(Blueprintable)
class ULobbySubsystemLobbySearchQueryUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULobbySubsystemLobbySearchQueryUtility();

    UFUNCTION(BlueprintCallable)
    static void SetLimit(UPARAM(Ref) FLobbySubsystemLobbySearchQuery& Query, int32 NewLimit);
    
    UFUNCTION(BlueprintCallable)
    static void AddLobbySearchQueryFilter_String(UPARAM(Ref) FLobbySubsystemLobbySearchQuery& Query, const FString& Key, const FString& Value, ELobbySubsystemLobbySearchQueryFilterComparator Comparator);
    
    UFUNCTION(BlueprintCallable)
    static void AddLobbySearchQueryFilter_Int64(UPARAM(Ref) FLobbySubsystemLobbySearchQuery& Query, const FString& Key, int64 Value, ELobbySubsystemLobbySearchQueryFilterComparator Comparator);
    
    UFUNCTION(BlueprintCallable)
    static void AddLobbySearchQueryFilter_Float(UPARAM(Ref) FLobbySubsystemLobbySearchQuery& Query, const FString& Key, float Value, ELobbySubsystemLobbySearchQueryFilterComparator Comparator);
    
    UFUNCTION(BlueprintCallable)
    static void AddLobbySearchQueryFilter_Bool(UPARAM(Ref) FLobbySubsystemLobbySearchQuery& Query, const FString& Key, bool bValue, ELobbySubsystemLobbySearchQueryFilterComparator Comparator);
    
};


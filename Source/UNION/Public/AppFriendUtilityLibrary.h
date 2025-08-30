#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECrossplayPlatform.h"
#include "OnlineSettingPlayerIconBgColorDataTableRow.h"
#include "OnlineSettingPlayerIconDataTableRow.h"
#include "AppFriendUtilityLibrary.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UNION_API UAppFriendUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAppFriendUtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static bool GetPlayerIconDataTableRowBySelectIndex(const UDataTable* InDatatable, int32 InDisplayIndex, FOnlineSettingPlayerIconDataTableRow& OutDataTableRow);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlayerIconDataTableRowByIconId(const UDataTable* InDatatable, int32 InIconId, FOnlineSettingPlayerIconDataTableRow& OutDataTableRow);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlayerIconDataTableRow(const UDataTable* InDatatable, const FName& InRowName, FOnlineSettingPlayerIconDataTableRow& OutDataTableRow);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlayerIconBgColorDataTableRowByColorId(const UDataTable* InDatatable, int32 InColorId, FOnlineSettingPlayerIconBgColorDataTableRow& OutDataTableRow);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlayerIconBgColorDataTableRow(const UDataTable* InDatatable, const FName& InRowName, FOnlineSettingPlayerIconBgColorDataTableRow& OutDataTableRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ECrossplayPlatform GetPlatformTypeByStringData(const FString& InPlatformStr);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertPlayerIdStringForDisplay(FString& OutPlayerIdForDisplay, const FString& InTargetPlayerId);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertLobbyIdStringForDisplay(FString& OutLobbyIdForDisplay, const FString& InTargetLobbyId);
    
};


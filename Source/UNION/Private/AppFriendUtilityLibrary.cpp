#include "AppFriendUtilityLibrary.h"

UAppFriendUtilityLibrary::UAppFriendUtilityLibrary() {
}

bool UAppFriendUtilityLibrary::GetPlayerIconDataTableRowBySelectIndex(const UDataTable* InDatatable, int32 InDisplayIndex, FOnlineSettingPlayerIconDataTableRow& OutDataTableRow) {
    return false;
}

bool UAppFriendUtilityLibrary::GetPlayerIconDataTableRowByIconId(const UDataTable* InDatatable, int32 InIconId, FOnlineSettingPlayerIconDataTableRow& OutDataTableRow) {
    return false;
}

bool UAppFriendUtilityLibrary::GetPlayerIconDataTableRow(const UDataTable* InDatatable, const FName& InRowName, FOnlineSettingPlayerIconDataTableRow& OutDataTableRow) {
    return false;
}

bool UAppFriendUtilityLibrary::GetPlayerIconBgColorDataTableRowByColorId(const UDataTable* InDatatable, int32 InColorId, FOnlineSettingPlayerIconBgColorDataTableRow& OutDataTableRow) {
    return false;
}

bool UAppFriendUtilityLibrary::GetPlayerIconBgColorDataTableRow(const UDataTable* InDatatable, const FName& InRowName, FOnlineSettingPlayerIconBgColorDataTableRow& OutDataTableRow) {
    return false;
}

ECrossplayPlatform UAppFriendUtilityLibrary::GetPlatformTypeByStringData(const FString& InPlatformStr) {
    return ECrossplayPlatform::Xbox;
}

void UAppFriendUtilityLibrary::ConvertPlayerIdStringForDisplay(FString& OutPlayerIdForDisplay, const FString& InTargetPlayerId) {
}

void UAppFriendUtilityLibrary::ConvertLobbyIdStringForDisplay(FString& OutLobbyIdForDisplay, const FString& InTargetLobbyId) {
}



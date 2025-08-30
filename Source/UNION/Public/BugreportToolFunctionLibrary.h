#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBugreportToolLogType.h"
#include "BugreportToolFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UNION_API UBugreportToolFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBugreportToolFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void BT_SetTicketInfo(int32 Revision, const FString& BuildData, const FString& AncillaryInfo, const FString& userName);
    
    UFUNCTION(BlueprintCallable)
    static void BT_SetExtensionParamPosition(FVector Position);
    
    UFUNCTION(BlueprintCallable)
    static void BT_SetCustomField(const FString& FieldName, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void BT_SetAdditionalDescription(const FString& Description);
    
    UFUNCTION(BlueprintCallable)
    static FString BT_PrintMemoryString(const FString& BT_InString, bool BT_bMemoryToLog, EBugreportToolLogType BT_memoryLogType);
    
    UFUNCTION(BlueprintCallable)
    static void BT_LaunchBugReport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BT_IsLibraryInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BT_IsErrorHandling();
    
    UFUNCTION(BlueprintCallable)
    static void BT_AddAttachedFile(const FString& Path);
    
};


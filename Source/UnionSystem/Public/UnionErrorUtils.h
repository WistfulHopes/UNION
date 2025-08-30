#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EErrorLevel.h"
#include "EOnlineErrorId.h"
#include "EResponseCodeAbstract.h"
#include "UnionErrorUtils.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionErrorUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionErrorUtils();

    UFUNCTION(BlueprintCallable)
    static void SetSeverErrorWithTopMenuText(EResponseCodeAbstract ResponseCode, int32 Code);
    
    UFUNCTION(BlueprintCallable)
    static void SetSeverError(EResponseCodeAbstract ResponseCode, int32 Code);
    
    UFUNCTION(BlueprintCallable)
    static void SetNetworkErrorWithTopMenuText(EOnlineErrorId ErrorID);
    
    UFUNCTION(BlueprintCallable)
    static void SetNetworkError(EOnlineErrorId ErrorID);
    
    UFUNCTION(BlueprintCallable)
    static void ResetReLoginFlag();
    
    UFUNCTION(BlueprintCallable)
    static bool IsNeedReLogin();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisplayedErrorViewer();
    
    UFUNCTION(BlueprintCallable)
    static bool IsAddFairPlayPoints();
    
    UFUNCTION(BlueprintCallable)
    static bool HasRaceFatalError();
    
    UFUNCTION(BlueprintCallable)
    static FText GetServerErrorTitleText(EResponseCodeAbstract ResponseCode);
    
    UFUNCTION(BlueprintCallable)
    static FText GetServerErrorReturnMenuText(EResponseCodeAbstract ResponseCode, int32 AppendId);
    
    UFUNCTION(BlueprintCallable)
    static FText GetServerErrorBodyText(EResponseCodeAbstract ResponseCode, int32 AppendId);
    
    UFUNCTION(BlueprintCallable)
    static FText GetOnlineErrorTitleText(EOnlineErrorId ErrorID);
    
    UFUNCTION(BlueprintCallable)
    static FText GetOnlineErrorReturnMenuText(EOnlineErrorId ErrorID, int32 AppendId);
    
    UFUNCTION(BlueprintCallable)
    static FText GetOnlineErrorBodyText(EOnlineErrorId ErrorID, int32 AppendId);
    
    UFUNCTION(BlueprintCallable)
    static EErrorLevel GetErrorLevel();
    
    UFUNCTION(BlueprintCallable)
    static void DbgSetNetworkErrorWithText(EOnlineErrorId ErrorID, const FText& BodyText);
    
    UFUNCTION(BlueprintCallable)
    static void DbgSetNetworkErrorWithString(EOnlineErrorId ErrorID, const FString& BodyStr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckReturnTitleError(EResponseCodeAbstract ResponseCodeAbstract);
    
};


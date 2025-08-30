#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAppLogLevel.h"
#include "EAppSupportedPlatform.h"
#include "ECrossplayPlatform.h"
#include "EMilestoneVersion.h"
#include "AppFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UAppFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAppFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* TryLoadAsset(const FString& AssetPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TruncateTextWithEllipsis(FText Text, int32 Length);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString TruncateStringWithEllipsis(const FString& str, int32 Length);
    
    UFUNCTION(BlueprintCallable)
    static void SetMilestoneVersion(EMilestoneVersion NewMilestoneVersion);
    
    UFUNCTION(BlueprintCallable)
    static void OutputUE_LOG(EAppLogLevel InLevel, const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsXbox();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWindows();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVersionOverThan10100();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTestBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSwitch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSupportHDVibration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPre2ndRom();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayStation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayInEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMasterLaunchOptionEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDevelopmentBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool Is2ndRomWithWorldContext(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Is2ndRom();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 HexToNumber(const FString& str);
    
    UFUNCTION(BlueprintPure)
    static FString GetUtcDateTimeString(int64 UnixTimestampFromServer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ECrossplayPlatform GetPlatformGroup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EAppSupportedPlatform GetPlatform();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EMilestoneVersion GetMileStoneVersionWithWorldContext(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static EMilestoneVersion GetMileStoneVersion();
    
    UFUNCTION(BlueprintPure)
    static FString GetLocalDateTimeString(int64 UnixTimestampFromServer);
    
    UFUNCTION(BlueprintPure)
    static FDateTime GetLocalDateTime(int64 UnixTimestampFromServer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetHexString(int32 Input, int32 Length, bool AddZero);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDateTimeStringWithoutSecond(const FDateTime& DateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDateTimeString(const FDateTime& DateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDateString(const FDateTime& DateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetClampUserNameLength();
    
};


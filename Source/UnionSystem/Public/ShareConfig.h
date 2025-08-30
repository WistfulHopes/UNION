#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ShareConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Share)
class UNIONSYSTEM_API UShareConfig : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UrlOfficial;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UrlTwitter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UrlYouTube;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tags;
    
    UShareConfig();

};


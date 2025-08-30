#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EPlatformStoreType.h"
#include "PlatformStoreMessageDataAsset.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UPlatformStoreMessageDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PlayStationPlatformStoreMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText XboxPlatformStoreMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SwitchPlatformStoreMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SteamPlatformStoreMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EpicPlatformStoreMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AcceptButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CancelButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PlatformStoreButtonMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PlayStationPlatformStoreButtonMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText XboxPlatformStoreButtonMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SwitchPlatformStoreButtonMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SteamPlatformStoreButtonMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EpicPlatformStoreButtonMessage;
    
public:
    UPlatformStoreMessageDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlatformStoreMessage(EPlatformStoreType PlatformType) const;
    
    UFUNCTION(BlueprintCallable)
    void GetPlatformStoreButtonText(FText& AcceptText, FText& CancelText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlatformStoreButtonMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlatformStoreType GetCurrentPlatform() const;
    
};


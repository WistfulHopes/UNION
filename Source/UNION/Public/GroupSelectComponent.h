#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ECrossplayPlatform.h"
#include "EDriverId.h"
#include "GroupSelectComponent.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UGroupSelectComponent : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName playerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrossplayPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PlatformIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CharacterIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupIndex;
    
    UGroupSelectComponent();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerNameString(const FString& InPlayerNameString);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlatformIconIndex(int32 InPlatformIconIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLocalPlayerInfo(bool bInLocalPlayer, int32 InLocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconIndex(int32 IconIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGroupIndex(int32 InGroupIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharacter(EDriverId InDriverId);
    
};


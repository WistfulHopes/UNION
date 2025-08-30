#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EPopupWindowType.h"
#include "UISubsystem.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUISubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* PopupWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* RewardDisplayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* FriendListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* AdvertiseWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* AutoSaveInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ProfileErrorWidget;
    
public:
    UUISubsystem();

    UFUNCTION(BlueprintCallable)
    UUserWidget* GetRewardDisplayWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPopupWindowType GetPopupWindowType();
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetFriendListWidget();
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetAutoSaveInfoWidget();
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetAdvertiseWidget();
    
    UFUNCTION(BlueprintCallable)
    void DestroyRewardDisplayWidget();
    
    UFUNCTION(BlueprintCallable)
    void DestroyProfileErrorPopupWindow();
    
    UFUNCTION(BlueprintCallable)
    void DestroyFriendListWidget();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAutoSaveInfoWidget();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAdvertiseWidget();
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* CreateRewardDisplayWidget();
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* CreateProfileErrorPopupWindow();
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* CreateFriendListWidget();
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* CreateAutoSaveInfoWidget();
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* CreateAdvertiseWidget();
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UnionUISceneBase.h"
#include "ELobbySearchSceneType.h"
#include "WirelessLobbyAnimEventDelegate.h"
#include "WirelessLobbySelectScene.generated.h"

class UDataTable;
class ULobbyJoinInfo;
class ULobbyMemberContextBase;
class UTexture2D;
class UUnionUIButtonBase;
class UUnionUIButtonsPanel;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UWirelessLobbySelectScene : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWirelessLobbyAnimEvent OnFinishedInAnimationEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWirelessLobbyAnimEvent OnFinishedOutAnimationEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> PlayerIconDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> PlayerIconBgColorDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultPlayerIconBgColorId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionUIButtonBase*> MenuButtonArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* MenuButtonsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionUIButtonBase*> FoundLobbyButtonArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* FoundLobbyButtonsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Window_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Window_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Window_Out;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LoadPlayerIconDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LoadPlayerIconBgColorDataTable;
    
public:
    UWirelessLobbySelectScene();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMemberTodayRecord(const TArray<ULobbyMemberContextBase*>& Members);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMemberList(const TArray<ULobbyMemberContextBase*>& NewMembers);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateLobbyListByLobbySessions(const TArray<ULobbyJoinInfo*>& LobbySessions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateLobbyList(const TArray<int32>& InLobbies);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchLobbySearchWidget(ELobbySearchSceneType InLobbySearchSceneType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationIn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerIconTexture(int32 InIconId, TSoftObjectPtr<UTexture2D>& OutIconTexture);
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerIconBgColor(const FString& InBgColor, FLinearColor& OutColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUnionUIButtonsPanel* GetMenuButtonsPanel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUnionUIButtonsPanel* GetFoundLobbyButtonsPanel() const;
    
};


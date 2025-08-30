#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "ETitleSequenceState.h"
#include "MenuSequenceUIInterface.h"
#include "TitleSequence.generated.h"

class AFullGameStoreDialogActor;
class AMenuSequence;
class UMenuInputRecieveObject;
class UMilestoneSpecificTitleDebugCommand;
class UObject;
class UTexture2D;
class UTitleDebugCommand;

UCLASS(Blueprintable)
class UNION_API ATitleSequence : public AHierarchicalStateMachine, public IMenuSequenceUIInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMenuSequence* MenuSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* MenuInputReceiveObject;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTitleDebugCommand* DebugCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMilestoneSpecificTitleDebugCommand* MilestoneSpecificDebugCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFullGameStoreDialogActor* FullGameStorePopup;
    
public:
    ATitleSequence(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnBindMenuInputReceive();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextTitleSequenceState(ETitleSequenceState InState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateTitleTop(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateFinishedAdvertiseLogoFlow(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateDetachUnavailableContent(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateConvertSaveDataForDemo(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateConvertSaveData(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateWarning();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateTitleTop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateStore();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateLogos();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateLicense();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateGameQuit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateFinishedAdvertiseLogoFlow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateDetachUnavailableContent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateCreateAndLoadSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateConvertSaveDataForDemo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateConvertSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateCheckPlatformPrivilege();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateAutoSaveInformation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateAgreement();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFaceButtonTopPressedTitle(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFaceButtonLeftPressedTitle(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateFinishedAdvertiseLogoFlow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateDetachUnavailableContent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateCreateAndLoadSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateConvertSaveDataForDemo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateConvertSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBackKeyPressedTitle(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAcceptKeyPressedTitle(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidSaveDataAppRomVersion() const;
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetStrapTexture();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETitleSequenceState GetExitSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETitleSequenceState GetCurrentTitleState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DecisionStoreEvent(bool IsAccept);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindMenuInputReceive();
    

    // Fix for true pure virtual functions not being implemented
};


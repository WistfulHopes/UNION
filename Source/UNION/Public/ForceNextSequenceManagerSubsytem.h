#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ELobbySequenceAvailabilityType.h"
#include "ForceNextSequenceManagerSubsytem.generated.h"

class UWidget;

UCLASS(Blueprintable)
class UNION_API UForceNextSequenceManagerSubsytem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLobbySequenceChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbySequenceChanged OnChangeUnavailableSequence;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> CurrentViewportWidgetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* LastFocusedWidget;
    
public:
    UForceNextSequenceManagerSubsytem();

    UFUNCTION(BlueprintCallable)
    void SetProceedingToLobby(bool ProceedingStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetPFLobbyInviteAccepted(bool PFLobbyInvite);
    
    UFUNCTION(BlueprintCallable)
    void SetNotAvailableLobbyInvite(bool NotAvailable);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyInviteAccepted(bool LobbyInvite);
    
    UFUNCTION(BlueprintCallable)
    void SetInRaceLobbyInvited(bool Invited);
    
    UFUNCTION(BlueprintCallable)
    void RemovePriorityLobbySequenceType(int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCurrentViewportWidget();
    
    UFUNCTION(BlueprintCallable)
    void MinusBusyFlagCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReturnToTitleError() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPFLobbyInviteAccepted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNotAvailableLobbyInvite() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLobbyInviteAccepted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsProceedingToLobby() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInRaceLobbyInvited() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIgnoreInputWidgetCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELobbySequenceAvailabilityType GetCurrentLobbySequenceType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBusyFlag() const;
    
    UFUNCTION(BlueprintCallable)
    void AddPriorityLobbySequenceType(int32 Priority, ELobbySequenceAvailabilityType SequenceType);
    
    UFUNCTION(BlueprintCallable)
    void AddBusyFlagCount();
    
};


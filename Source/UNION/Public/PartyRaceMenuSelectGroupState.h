#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "MenuSequenceSubStateBase.h"
#include "PartyRaceMenuSelectGroupState.generated.h"

class UGroupSelect;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UPartyRaceMenuSelectGroupState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGroupSelectEvent);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGroupSelect* GroupSelectHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGuest;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGroupSelectEvent OnCancelAndPrevSequence;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGroupSelectEvent OnNextSeqeunce;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnlinePlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OwnLobbyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDriverId> LobbyRacersDriverId;
    
public:
    UPartyRaceMenuSelectGroupState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOwnLobbyIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlinePlayerNum(int32 PlayerCount);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyRacersDriverId(TArray<EDriverId> inArray);
    
    UFUNCTION(BlueprintCallable)
    void SetIsGuest(bool Guest);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceFixGroupSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyCurrentGroupSetting();
    
};


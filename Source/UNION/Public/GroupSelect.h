#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "MenuInputRecieveInterface.h"
#include "UnionUISceneBase.h"
#include "GroupSelect.generated.h"

class UGroupSelectComponentController;
class UUnionUIButtonsPanel;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UGroupSelect : public UUnionUISceneBase, public IMenuInputRecieveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* RacersPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnlinePlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OwnLobbyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDriverId> OnlineDriverIdArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGroupSelectComponentController*> Components;
    
    UGroupSelect();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateComponents();
    
    UFUNCTION(BlueprintCallable)
    void StartRandom(int32 StartPosition, int32 EndPosition, bool bIsLast);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnLobbyIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlinePlayerCount(int32 PlayerCnt);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineDriverIdArray(TArray<EDriverId> inArray);
    
    UFUNCTION(BlueprintCallable)
    void SetIsGuest(bool Guest);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupIndexAll();
    
    UFUNCTION(BlueprintCallable)
    void SetForceGroupSettingCompleted();
    
    UFUNCTION(BlueprintCallable)
    void SetForceGroupSetting(const TArray<int32>& InGroupIndexArray);
    
    UFUNCTION(BlueprintCallable)
    void SetEndControlComponents();
    
    UFUNCTION(BlueprintCallable)
    void SetAllVisibleComponents();
    
    UFUNCTION(BlueprintCallable)
    void ResolveIsGroupOverflow(int32 PlayerCnt);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlateMoving();
    
    UFUNCTION(BlueprintCallable)
    EDriverId GetOnlineDriverIdFromArray(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGroupIndex(int32 RacerIndex) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetAllRacerIndexInGroup(int32 GroupIndex, int32 PlayerCnt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetAllGroupIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceDecisionGroupEvent();
    
    UFUNCTION(BlueprintCallable)
    void ForceComponentsMoveEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusToTop();
    

    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "EUnionUIControlDir.h"
#include "UnionUIButtonBase.h"
#include "EGroupSelectComponentPlaceState.h"
#include "GroupSelectComponentController.generated.h"

class UGroupSelectComponent;
class UImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UGroupSelectComponentController : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGroupSelectComponentControllerDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGroupSelectComponent* PlayerInfoComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanMoveAnimFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnlineRandomMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EUnionUIControlDir, UImage*> Dirction_ImageMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Default_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Default_to_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Default_to_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroupSelectComponentPlaceState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* TargetAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetAnimForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroupSelectComponentPlaceState TargetState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGroupSelectComponentControllerDelegate OnRandomTeamEvent;
    
    UGroupSelectComponentController();

    UFUNCTION(BlueprintCallable)
    void SetPlayerNameString(const FString& InPlayerNameString);
    
    UFUNCTION(BlueprintCallable)
    void SetPlatformIconIndex(int32 InPlatformIconIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalPlayerInfo(bool bInLocalPlayer, int32 InLocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetIsWait(bool IsWait);
    
    UFUNCTION(BlueprintCallable)
    void SetIsOnlineRandomMove(bool IsRandom);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconIndex(int32 InIconIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupIndex(int32 InGroupIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetEndFlag(bool _bIsEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacter(EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveToDirectionBP(EUnionUIControlDir ToDirection, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsWait();
    
    UFUNCTION(BlueprintCallable)
    bool GetEndFlag();
    
    UFUNCTION(BlueprintCallable)
    bool CalcMovable(EUnionUIControlDir ToDirection);
    
};


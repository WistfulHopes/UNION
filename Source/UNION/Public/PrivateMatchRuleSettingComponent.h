#pragma once
#include "CoreMinimal.h"
#include "EPrivateMatchPlayType.h"
#include "MenuSequenceSubStateBase.h"
#include "PrivateMatchRuleSettingComponent.generated.h"

class APrivateMatchRuleSettingSequence;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UPrivateMatchRuleSettingComponent : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APrivateMatchRuleSettingSequence* ChildRuleSettingSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitializedParams;
    
public:
    UPrivateMatchRuleSettingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateRivalTeamSetting();
    
    UFUNCTION(BlueprintCallable)
    void UpdateRacerGroupIndex();
    
    UFUNCTION(BlueprintCallable)
    void SetUpRacerCount(int32 LobbyMemberCount);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyPlayType(EPrivateMatchPlayType PlayType);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInitializedParamaters(bool Initialized);
    
    UFUNCTION(BlueprintCallable)
    void SetHostRuleSettingFlag(bool bIsHost);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsRuleConfigured();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsInitializedParamaters();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsCustomizedRule();
    
};


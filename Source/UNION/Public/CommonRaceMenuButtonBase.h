#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "EGameModeId.h"
#include "UnionUIButtonBase.h"
#include "CommonRaceMenuContentRow.h"
#include "ECommonRaceMenuContentId.h"
#include "ECommonRaceMenuIconId.h"
#include "CommonRaceMenuButtonBase.generated.h"

class USoundAtomCue;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonRaceMenuButtonBase : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* AcceptSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CancelSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* ErrorSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SelectSE;
    
    UCommonRaceMenuButtonBase();

    UFUNCTION(BlueprintCallable)
    void SetupContent(EGameModeId InGameModeId, const FCommonRaceMenuContentRow& InContentDef);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNewIconVisible(bool bVisible);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusEnd(const FFocusEvent& InFocusEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusBegin(const FFocusEvent& InFocusEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnContentSet();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPopupWarningMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIconIdAsInteger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommonRaceMenuIconId GetIconId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameModeId GetGameModeId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommonRaceMenuContentId GetContentId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCommonRaceMenuContentRow GetContentDef() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesNeedToPopupWarning() const;
    
};


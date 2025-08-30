#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EMachineCustomizeTabID.h"
#include "MachineCustomTabButton.generated.h"

class UImage;
class UUnionRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UMachineCustomTabButton : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEventMachineCustomTabButton, EMachineCustomizeTabID, InTabID);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PAT_TabPict;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_NewIconWave;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventMachineCustomTabButton OnEventClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IconIndex;
    
public:
    UMachineCustomTabButton();

    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetNewIconVisible(bool InVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetIconIndex(int32 InIconIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnabled(bool bInIsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnim(bool bInIsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMachineCustomizeTabID GetTabID() const;
    
};


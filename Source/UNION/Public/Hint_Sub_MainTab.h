#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EHintTabID.h"
#include "Hint_Sub_MainTab.generated.h"

class UMenuInputRecieveObject;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UHint_Sub_MainTab : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEventHintTabChange, EHintTabID, InTabID);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventHintTabChange OnEventTabChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* MenuInputReceiveObject;
    
public:
    UHint_Sub_MainTab();

};


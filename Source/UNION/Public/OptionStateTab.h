#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OptionStateTab.generated.h"

class UOptionStateTabBtn;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UOptionStateTab : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionStateTabBtn* TabOnline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionStateTabBtn* TabRace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionStateTabBtn* TabControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionStateTabBtn* TabLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionStateTabBtn* TabGraphics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionStateTabBtn* TabAudio;
    
    UOptionStateTab();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateShoulderButton();
    
};


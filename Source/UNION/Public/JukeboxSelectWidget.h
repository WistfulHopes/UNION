#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "JukeboxSelectWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UJukeboxSelectWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UJukeboxSelectWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefleshTrack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefleshAlbum();
    
};


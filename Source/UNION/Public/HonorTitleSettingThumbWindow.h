#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HonorTitleSettingThumbWindow.generated.h"

class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UHonorTitleSettingThumbWindow : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWrapBox*> TabWrapBoxArray;
    
    UHonorTitleSettingThumbWindow();

    UFUNCTION(BlueprintCallable)
    void RemoveAllTabWrapBoxChild();
    
    UFUNCTION(BlueprintCallable)
    void AddTabWrapBoxChild(int32 Rarity, UUserWidget* Object);
    
};


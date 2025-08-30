#pragma once
#include "CoreMinimal.h"
#include "Components/ComboBoxString.h"
#include "UnionComboBoxString.generated.h"

UCLASS(Blueprintable)
class UNIONUI_API UUnionComboBoxString : public UComboBoxString {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInit;
    
    UUnionComboBoxString();

    UFUNCTION(BlueprintCallable)
    void InitializeOptions(const TArray<FString>& Initialize);
    
    UFUNCTION(BlueprintCallable)
    void FilterOptions(const FString& FilterText);
    
};


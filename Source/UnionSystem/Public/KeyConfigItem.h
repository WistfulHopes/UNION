#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputCoreTypes.h"
#include "KeyConfigItem.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UKeyConfigItem : public UObject {
    GENERATED_BODY()
public:
    UKeyConfigItem();

    UFUNCTION(BlueprintCallable)
    void SetSecondaryKey(const FKey& Key);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryKey(const FKey& Key);
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCustomized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSecondaryMappingName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetSecondaryKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetSecondaryDefaultKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPrimaryMappingName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetPrimaryKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetPrimaryDefaultKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayName() const;
    
};


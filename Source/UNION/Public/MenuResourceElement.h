#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MenuResourceElement.generated.h"

UCLASS(Blueprintable)
class UNION_API UMenuResourceElement : public UObject {
    GENERATED_BODY()
public:
    UMenuResourceElement();

    UFUNCTION(BlueprintCallable)
    void SetEmpty(bool bInIsEmpty);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnloadResource();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoadResource();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRowIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetColumnIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAllIndex() const;
    
};


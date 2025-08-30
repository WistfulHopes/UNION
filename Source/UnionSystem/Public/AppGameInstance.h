#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "AppGameInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNIONSYSTEM_API UAppGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UAppGameInstance();

    UFUNCTION(BlueprintCallable)
    void Set2ndRom(bool Is2ndRom);
    
    UFUNCTION(BlueprintCallable)
    void ReadVCSChangelistFromFile();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVCSRevisionStr(FString& OutVCSString) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVCSRevisionNum(int32& OutVCSRevisionNum) const;
    
};


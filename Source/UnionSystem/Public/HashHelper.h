#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HashHelper.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UHashHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHashHelper();

    UFUNCTION(BlueprintCallable)
    static FString HashIntoTextStringFromByteArray(const TArray<uint8>& Bytes);
    
    UFUNCTION(BlueprintCallable)
    static FString HashIntoTextString(const FString& Data);
    
    UFUNCTION(BlueprintCallable)
    static TArray<uint8> HashIntoByteArrayFromByteArray(const TArray<uint8>& Bytes);
    
    UFUNCTION(BlueprintCallable)
    static TArray<uint8> HashIntoByteArray(const FString& Data);
    
};


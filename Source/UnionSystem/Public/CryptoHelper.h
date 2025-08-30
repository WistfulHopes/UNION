#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CryptoHelper.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UCryptoHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCryptoHelper();

    UFUNCTION(BlueprintCallable)
    static FString EncryptIntoTextString(const FString& Data, const FString& HexKey, const FString& Vector);
    
    UFUNCTION(BlueprintCallable)
    static FString EncryptFromByteArrayIntoTextString(const TArray<uint8>& Bytes, const FString& HexKey, const FString& Vector);
    
    UFUNCTION(BlueprintCallable)
    static FString DecryptFromTextString(const FString& Data, const FString& HexKey, const FString& Vector);
    
};


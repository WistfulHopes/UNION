#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "CommonMenuControllerCross.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCommonMenuControllerCross : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Bottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CurrentKey;
    
public:
    UCommonMenuControllerCross();

    UFUNCTION(BlueprintCallable)
    void SetKeyIndex(int32 InKeyIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetKey(const FKey& InKey);
    
};


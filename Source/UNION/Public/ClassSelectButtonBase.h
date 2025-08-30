#pragma once
#include "CoreMinimal.h"
#include "EMenuSpeedClassId.h"
#include "ESpeedClassId.h"
#include "UnionUIButtonStandard.h"
#include "ClassSelectButtonBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UClassSelectButtonBase : public UUnionUIButtonStandard {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedClassId SpeedClassId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuSpeedClassId MenuSpeedClassId;
    
    UClassSelectButtonBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSpeedClass(ESpeedClassId InSpeedClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMenuSpeedClass(EMenuSpeedClassId InMenuSpeedClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetComplete(bool InComplete);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESpeedClassId GetSpeedClass();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMenuSpeedClassId GetMenuSpeedClass();
    
};


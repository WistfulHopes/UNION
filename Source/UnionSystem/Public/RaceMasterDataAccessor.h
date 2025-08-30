#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERaceRunDataType.h"
#include "RaceMasterDataAccessor.generated.h"

UCLASS(Abstract, Blueprintable)
class UNIONSYSTEM_API URaceMasterDataAccessor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* RunData[35];
    
    URaceMasterDataAccessor();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetRunData(ERaceRunDataType Type) const;
    
};


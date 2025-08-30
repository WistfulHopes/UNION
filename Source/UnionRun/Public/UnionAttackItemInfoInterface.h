#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "EEnemyItemId.h"
#include "EItemId.h"
#include "EDomainIndex.h"
#include "EDomainNumber.h"
#include "EUnionAttackItemInfoType.h"
#include "UnionAttackItemInfoInterface.generated.h"

UINTERFACE(Blueprintable)
class UNIONRUN_API UUnionAttackItemInfoInterface : public UInterface {
    GENERATED_BODY()
};

class UNIONRUN_API IUnionAttackItemInfoInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAttackItemUsedForBackIF();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAttackItemTargetIF(int32 checkRacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAttackItemMoveToTargetIgnorePathIF();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetUsingRacerIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetSameDomainOnlyFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetObjectWorldLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetObjectRaceDomainElapsedRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetObjectRaceDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetObjectPathIndexDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetObjectLapCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EDomainNumber GetObjectDomainNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetObjectDomainLocationUE();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EDomainIndex GetObjectDomainIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EUnionAttackItemInfoType GetAttackItemInfoTypeIF() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EItemId GetAttackItemIdIF();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EEnemyItemId GetAttackEnemyItemIdIF();
    
};


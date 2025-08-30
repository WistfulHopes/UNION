#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnionRaceInfoNotifier.generated.h"

class UUnionRaceInfo;

UCLASS(Blueprintable)
class UNIONRUN_API UUnionRaceInfoNotifier : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<UObject>> ListenerSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionRaceInfo* LastRaceInfoObject;
    
public:
    UUnionRaceInfoNotifier();

    UFUNCTION(BlueprintCallable)
    void UnregisterRaceInfoListener(UObject* InListener);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void RegisterRaceInfoListener(UObject* InListener);
    
};


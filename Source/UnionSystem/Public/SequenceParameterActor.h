#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SequenceParameterActor.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API ASequenceParameterActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FTransform SequenceTransform_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bSequenceVisibility_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bSequenceEvent_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bSequenceMainFloorVisibility_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bSequenceFloorFrontVisibility_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bSequenceFloorBackVisibility_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bSequenceAccelFloorVisibility_;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SequenceLabel;
    
public:
    ASequenceParameterActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSequenceVisibility_(bool bVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetSequenceTransform_(FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    void SetSequenceMainFloorVisibility_(bool bVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetSequenceFloorFrontVisibility_(bool bVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetSequenceFloorBackVisibility_(bool bVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetSequenceEvent_(bool bEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetSequenceAccelFloorVisibility_(bool bVisibility);
    
};


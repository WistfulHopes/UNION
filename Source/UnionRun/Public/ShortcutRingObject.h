#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "ETravelRingType.h"
#include "CameraMessageInterface.h"
#include "EShortcutRingType.h"
#include "Templates/SubclassOf.h"
#include "UnionCourseObjectBase.h"
#include "ShortcutRingObject.generated.h"

class AActor;
class USceneComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AShortcutRingObject : public AUnionCourseObjectBase, public ICameraMessageInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> GateActorClass_;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETravelRingType TravelRingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShortcutRingType ShortcutRingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHalfRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShortcutId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId StageId_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RingScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAnotherGate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverrideCollisionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideCollisionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> GateActors_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
public:
    AShortcutRingObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupShortcutRing();
    
    UFUNCTION(BlueprintCallable)
    void SetTravelRingType(ETravelRingType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetShortcutRingType(EShortcutRingType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetShortcutId(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetRingScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetHalfRing(bool bHalf);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseOverrideCollisionScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseAnotherGate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHalfRing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETravelRingType GetTravelRingType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStageId GetStageId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EShortcutRingType GetShortcutRingType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShortcutId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRingScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverrideCollisionScale();
    

    // Fix for true pure virtual functions not being implemented
};


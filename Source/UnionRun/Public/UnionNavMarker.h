#pragma once
#include "CoreMinimal.h"
#include "ENavMarkerLapType.h"
#include "ETransformRingType.h"
#include "EUnionNavMarkerType.h"
#include "UnionCourseObjectBase.h"
#include "UnionNavMarkerOnTransformChangedDelegate.h"
#include "UnionNavMarker.generated.h"

class AActor;
class USceneComponent;
class UUnionSplineComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AUnionNavMarker : public AUnionCourseObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionNavMarkerOnTransformChanged OnTransformChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENavMarkerLapType LapType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionNavMarkerType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> UseSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SplineOnPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseSplineLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransformRingType TransformRingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInvalid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAnother;
    
public:
    AUnionNavMarker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSplineOnPosition();
    
    UFUNCTION(BlueprintCallable)
    void SetUseSplineLength(float InLength);
    
    UFUNCTION(BlueprintCallable)
    void SetUseSplineActor(TSoftObjectPtr<AActor> InUseSplineActor);
    
    UFUNCTION(BlueprintCallable)
    void SetType(EUnionNavMarkerType NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformRingType(ETransformRingType TransformType);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineOnPosition(int32 InPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetLapType(ENavMarkerLapType NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAnother(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIndex(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvalid() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsFinalLapOnly();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnother() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUseSplineLength() const;
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<AActor> GetUseSplineActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUnionSplineComponent* GetUnionSplineComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUnionNavMarkerType GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETransformRingType GetTransformRingType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSplineOnPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENavMarkerLapType GetLapType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex() const;
    
};


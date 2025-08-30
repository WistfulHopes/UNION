#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "EUnionSplineType.h"
#include "SplineParam.h"
#include "SplinePointParam.h"
#include "UnionSplineComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONRUN_API UUnionSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSplinePointParam> _PointParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _SplineLength;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionSplineType _SplineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineParam _SplineParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _RouteIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bEnableBranch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bOverrideBranchStartPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* _BranchStartPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bOverrideConnectStartPointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _ConnectStartPointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bOverrideBranchEndPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* _BranchEndPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bOverrideConnectEndPointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _ConnectEndPointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _RemoveBeforeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _RemoveAfterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector _branchStartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector _branchEndLocation;
    
    UUnionSplineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateBranchLocation();
    
    UFUNCTION(BlueprintCallable)
    void RemovePointByPointIndex(int32 RemovePointIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemovePointByIndex(TArray<int32> RemoveIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemovePointBeforeIndex();
    
    UFUNCTION(BlueprintCallable)
    void RemovePointAfterIndex();
    
    UFUNCTION(BlueprintCallable)
    void PrePointParamUpdate(int32 RouteIndex, int32 StartPointIndex);
    
    UFUNCTION(BlueprintCallable)
    void PointParamUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArrived(float Length) const;
    
    UFUNCTION(BlueprintCallable)
    void InitSplinePointParam(TArray<FSplinePointParam> SplineParamArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUnionSplineType GetSplineType() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSplineParamByIndex(int32 PointIndex, FSplinePointParam& returnParam);
    
    UFUNCTION(BlueprintCallable)
    bool GetSplineParamByArrayIndex(int32 ArrayIndex, FSplinePointParam& returnParam);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentLocationAndRotation(float Length, bool bLoop, FVector& OutLocation, FVector& OutDirection, FRotator& OutRotation);
    
};


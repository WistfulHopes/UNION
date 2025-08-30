#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EObjectPlacementType.h"
#include "ECourseObjColType.h"
#include "ECourseObjType.h"
#include "EDomainIndex.h"
#include "EDomainNumber.h"
#include "ERandomObjType.h"
#include "UnionCourseObjectBase.generated.h"

class UDataTable;
class USkeletalMeshComponent;
class UUnionRoundTripMoveComponent;
class UUnionSplineMoveComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AUnionCourseObjectBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECourseObjType CourseObjType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VioletVoidAbsorbTargetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionSplineMoveComponent* SplineMoveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRoundTripMoveComponent* RoundTripMoveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRingGateHidden;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECourseObjColType ColType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttachMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRoundTripMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttachOffsetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ParentSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RoundTripDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObjectPlacementType ObjectPlacementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreGimmickCurringDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERandomObjType RandomObjType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PatternRandomId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> LinkActorArray;
    
public:
    AUnionCourseObjectBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRandomObjectType(ERandomObjType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetPatternRandomId(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetDomainNumber(EDomainNumber Number);
    
    UFUNCTION(BlueprintCallable)
    void SetDomainIndex(EDomainIndex Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPatternRandomId();
    
    UFUNCTION(BlueprintCallable)
    EObjectPlacementType GetObjectPlacementType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDomainNumber GetDomainNumber() const;
    
    UFUNCTION(BlueprintCallable)
    void CheckIsValidParentActor();
    
};


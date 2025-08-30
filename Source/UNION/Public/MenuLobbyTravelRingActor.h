#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ERaceSettingCourseSelecting.h"
#include "EStageId.h"
#include "MenuLobbyTravelRingActor.generated.h"

class UMaterialInstanceDynamic;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class UNION_API AMenuLobbyTravelRingActor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLobbyTravelRingDecidedDelegate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RingStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId DecidedStageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecidedRingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId RandomStageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> SelectStageIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SelectStageIndexs;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyTravelRingDecidedDelegate OnShowStageNameEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingCourseSelecting CourseSelectingType;
    
    AMenuLobbyTravelRingActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateScale(float InDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMaterials();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetScale(float InScale);
    
    UFUNCTION(BlueprintCallable)
    void SetRingCenterMipLevel(int32 InMipLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomStageId(EStageId InRandomStageId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRandomMarkMaterial();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayersSelectedStageIds(TArray<EStageId> InStageIds, TArray<int32> InRingIndexs);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialCourseResult();
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialCenterEmissivePower(float InEmissivePower);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsSelect(bool InIsSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsDecide(bool InIsDecide);
    
    UFUNCTION(BlueprintCallable)
    void SetFixDecidedStageId(EStageId InStageId, int32 InRingIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCourseId(EStageId InCourseId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize(int32 InRingIndex, EStageId InCourseId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRingIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStageId GetCourseId();
    
};


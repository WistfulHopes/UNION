#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "Engine/LevelScriptActor.h"
#include "EDomainNumber.h"
#include "UnionTravelRingLevelEventDelegate.h"
#include "UnionTravelRingLevelSetDrawModeDelegate.h"
#include "UnionTravelRingLevelActor.generated.h"

class AActor;
class AUnionTravelRingActor;
class UDataTable;
class UObject;
class UWorld;

UCLASS(Blueprintable)
class UNION_API AUnionTravelRingLevelActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionTravelRingLevelEvent OnSetSequence;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionTravelRingLevelSetDrawMode OnSetDrawMode;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AUnionTravelRingActor> TravelRingActors_[20];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> TrackingActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDomainNumber, TSoftObjectPtr<AActor>> TravelRingLeftWaves_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDomainNumber, TSoftObjectPtr<AActor>> TravelRingRightWaves_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDomainNumber, TSoftObjectPtr<AActor>> TravelRingFloors_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDomainNumber, TSoftObjectPtr<AActor>> TravelDecidePanels_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> PrevActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TravelRingMainCourseParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TravelRingAnotherCourseParamTable;
    
public:
    AUnionTravelRingLevelActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool StartTravelRingsAsync(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static bool StartTravelRings(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void Setup(int32 LevelIndex, int32 LevelId, int32 PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDomainNumber GetSelectDomainNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevelIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevelId() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AddTravelRingByReference(const UObject* WorldContextObject, TSoftObjectPtr<UWorld> Level, int32 PlayerId, int32 LevelIndex, int32 LevelId, int32 LightChannel, FVector Location, TSoftObjectPtr<UWorld> Dependant);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AddTravelRing(const UObject* WorldContextObject, FName LevelName, int32 PlayerId, int32 LevelIndex, int32 LevelId, int32 LightChannel, FVector Location, FName Dependan);
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EDomainNumber.h"
#include "ETravelRingType.h"
#include "UnionRingGateCameraInterface.h"
#include "UnionShortcutCameraActor.generated.h"

class UMeshComponent;
class UUnionShortcutComponent;

UCLASS(Blueprintable)
class UNION_API AUnionShortcutCameraActor : public AActor, public IUnionRingGateCameraInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionShortcutComponent* RootScene_;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETravelRingType TravelRingType_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageId_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerId_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShortcutId_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* TargetMesh_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDomainNumber DomainNumber_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ShortcutRingSrc_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ShortcutRingDst_;
    
public:
    AUnionShortcutCameraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Initialize();
    

    // Fix for true pure virtual functions not being implemented
};


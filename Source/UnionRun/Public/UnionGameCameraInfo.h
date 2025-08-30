#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UnionGameCameraInfo.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UUnionGameCameraInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_DomainPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_DomainTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_DomainUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FovY;
    
    UUnionGameCameraInfo();

    UFUNCTION(BlueprintCallable)
    float GetFovY();
    
    UFUNCTION(BlueprintCallable)
    void GetDomainUp(FVector& OutDomainUp);
    
    UFUNCTION(BlueprintCallable)
    void GetDomainTarget(FVector& OutDomainTarget);
    
    UFUNCTION(BlueprintCallable)
    void GetDomainPosition(FVector& OutDomainPosition);
    
};


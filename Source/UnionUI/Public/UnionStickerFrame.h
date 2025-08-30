#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnionStickerFrame.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class UNIONUI_API AUnionStickerFrame : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    AUnionStickerFrame(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AddStaticMeshComponent();
    
};


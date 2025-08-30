#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemBootDataObject.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UNIONRUN_API AItemBootDataObject : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemBootDataTable;
    
    AItemBootDataObject(const FObjectInitializer& ObjectInitializer);

};


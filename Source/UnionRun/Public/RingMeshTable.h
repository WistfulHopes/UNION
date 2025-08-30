#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERingExtndType.h"
#include "RingMeshTable.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct UNIONRUN_API FRingMeshTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERingExtndType RingExtndType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> RingMesh;
    
    FRingMeshTable();
};


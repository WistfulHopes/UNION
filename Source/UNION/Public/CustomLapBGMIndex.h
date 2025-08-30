#pragma once
#include "CoreMinimal.h"
#include "ESelectedState.h"
#include "CustomLapBGMIndex.generated.h"

USTRUCT(BlueprintType)
struct FCustomLapBGMIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESelectedState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AlbumIndex;
    
    UNION_API FCustomLapBGMIndex();
};


#pragma once
#include "CoreMinimal.h"
#include "ESelectedState.h"
#include "UserAlbumTrackID.generated.h"

USTRUCT(BlueprintType)
struct FUserAlbumTrackID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESelectedState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AlbumID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackID;
    
    UNIONSYSTEM_API FUserAlbumTrackID();
};


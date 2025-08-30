#pragma once
#include "CoreMinimal.h"
#include "AlbumCondition.h"
#include "TrackCondition.h"
#include "UserJukeboxData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserJukeboxData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAlbumCondition> AlbumCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FTrackCondition> TrackCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlayMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShuffle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstEnter;
    
    FUserJukeboxData();
};


#pragma once
#include "CoreMinimal.h"
#include "UserAlbumTrackID.h"
#include "UserCustomLapBGMData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserCustomLapBGMData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserAlbumTrackID> AlbumTrackList;
    
    FUserCustomLapBGMData();
};


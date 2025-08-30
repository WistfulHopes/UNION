#pragma once
#include "CoreMinimal.h"
#include "AlbumInfo.h"
#include "AlbumStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FAlbumStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AlbumID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlbumInfo AlbumInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> JacketTextureSoftPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TrackIndexList;
    
    UNION_API FAlbumStruct();
};


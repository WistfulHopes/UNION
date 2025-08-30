#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ContentAlbumData.h"
#include "ContentCharaData.h"
#include "ContentHonorTitleData.h"
#include "ContentMachineData.h"
#include "ContentStageData.h"
#include "ContentStickerData.h"
#include "EContentId.h"
#include "PackageData.h"
#include "ContentDataAsset.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UContentDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FContentCharaData> CharaDLCMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EContentId, FContentCharaData> CharaContentSeverTimeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FContentMachineData> MachineDLCMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EContentId, FContentMachineData> MachineContentSeverTimeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FContentStageData> StageDLCMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FContentStickerData> StickerDLCMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FContentHonorTitleData> HonorOtherTitleDLCMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FContentAlbumData> AlbumDLCMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EContentId, FContentAlbumData> AlbumSeverTimeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPackageData> PackageDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EContentId> ServerTimeContent;
    
public:
    UContentDataAsset();

    UFUNCTION(BlueprintCallable)
    void Build();
    
};


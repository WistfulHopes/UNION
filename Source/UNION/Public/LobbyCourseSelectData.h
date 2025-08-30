#pragma once
#include "CoreMinimal.h"
#include "ERaceSettingCourseSelecting.h"
#include "LobbyPlayerData.h"
#include "LobbyCourseSelectData.generated.h"

class ALobbyTravelRingManager;
class UCommonLobbyContext;
class ULobbyCourseSelectSceneBase;

USTRUCT(BlueprintType)
struct UNION_API FLobbyCourseSelectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALobbyTravelRingManager* LobbyTravelRingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbyCourseSelectSceneBase* CourseSelectUIScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLobbyPlayerData> LobbyPlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OwnPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonLobbyContext* PrimaryLobbyContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingCourseSelecting RaceRaceSettingCourseSelecting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OwnPlayerIsHost;
    
    FLobbyCourseSelectData();
};


#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "LobbyInitData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FLobbyInitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> CourseMainID;
    
    FLobbyInitData();
};


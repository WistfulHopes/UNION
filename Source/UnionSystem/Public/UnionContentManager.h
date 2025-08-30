#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDriverId.h"
#include "EMachineId.h"
#include "UnionContentManager.generated.h"

class UContentDebugMenu;
class UUnionAddOnBase;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionContentManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionAddOnBase* m_addOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UContentDebugMenu* m_DebugMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_packageIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDriverId> m_serverReleaseDriverList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMachineId> m_serverReleaseMachineList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_serverReleaseAlbumIdList;
    
public:
    UUnionContentManager();

};


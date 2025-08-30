#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MasterDataManageSubsystem.generated.h"

class UMasterDataHelper;
class URaceMasterDataAccessor;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UMasterDataManageSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMasterDataHelper* MasterDataHelper;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URaceMasterDataAccessor* RaceMasterDataAccessor;
    
public:
    UMasterDataManageSubsystem();

};


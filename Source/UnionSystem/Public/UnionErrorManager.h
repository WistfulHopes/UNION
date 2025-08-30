#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UnionErrorManager.generated.h"

class UNetworkLastError;
class UUnionErrorDebugMenu;
class UUnionErrorViewer;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionErrorManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetworkLastError* m_NetworkLastError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionErrorDebugMenu* m_ErrorDebugMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionErrorViewer* m_ErrorViewer;
    
public:
    UUnionErrorManager();

};


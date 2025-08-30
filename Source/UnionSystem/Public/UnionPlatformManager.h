#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UnionPlatformEventInfo.h"
#include "UnionPlatformManager.generated.h"

class UUnionContentManager;
class UUnionDeviceSelector;
class UUnionPlatformDebugMenu;
class UUnionPlatformSoftwareKeyboardBase;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionPlatformManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnDeviceConnected, bool, IsConnected);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionPlatformDebugMenu* m_DebugMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionDeviceSelector* m_XboxDeviceSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionPlatformSoftwareKeyboardBase* m_SoftwareKeyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionContentManager* m_ContentManager;
    
public:
    UUnionPlatformManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlatformEvent(const FUnionPlatformEventInfo& EventInfo);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DebugImportantLogSubsystem.generated.h"

class UDebugImportantLogPanel;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UDebugImportantLogSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebugImportantLogPanel* ImportantLogPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPanelVisibility;
    
public:
    UDebugImportantLogSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetImportantLogPanelVisible(bool bNewVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetImportantLogCount(int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    UDebugImportantLogPanel* GetImportantLogPanel();
    
    UFUNCTION(BlueprintCallable)
    void AddImportantLog(const FString& LogLocation, const FString& LogString);
    
};


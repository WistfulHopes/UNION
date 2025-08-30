#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ESequenceMainType.h"
#include "ESequenceSubType.h"
#include "AppSequenceLogManagerSubsystem.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UAppSequenceLogManagerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UAppSequenceLogManagerSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetSequenceType(ESequenceMainType MainType, ESequenceSubType SubType);
    
    UFUNCTION(BlueprintCallable)
    void SetSequenceSubType(ESequenceSubType SubType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSequenceTypeNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESequenceSubType GetSequenceSubType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESequenceMainType GetSequenceMainType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESequenceSubType GetBackupSequenceSubType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESequenceMainType GetBackupSequenceMainType();
    
    UFUNCTION(BlueprintCallable)
    void BackupSequenceType();
    
};


#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EStageId.h"
#include "StageIdUtilityLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UStageIdUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStageIdUtilityLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EStageId StringToStageId(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStageIdValid(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMainStage(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExtndMainStage(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugStage(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugMainStage(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugAnotherStage(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCommonStage(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAnotherStage(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStageString(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetStageNumber(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStageName(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EStageId GetStageIdByActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EStageId GetStageId(int32 InNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetStageEndNumber(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLevelName_Sound(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLevelName_ObjectGameIrregular(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLevelName_ObjectGameFinalLap(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLevelName_ObjectGame(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLevelName_ItemBoxIrregular(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLevelName_ItemBoxFinalLap(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLevelName_ItemBox(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLevelName_FX(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLevelName_Editor(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLevelName_BG(EStageId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EStageId GetEditorLevelStageId();
    
    UFUNCTION(BlueprintCallable)
    static FString BuildStageString(EStageId InId, const FString& InPrefix);
    
    UFUNCTION(BlueprintCallable)
    static FString BuildStageName(EStageId InId, const FString& InPrefix);
    
    UFUNCTION(BlueprintCallable)
    static FString BuildStageDirectory(EStageId InId);
    
};


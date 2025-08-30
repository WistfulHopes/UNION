#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "MenuResourcePreloader.generated.h"

class UMenuResourceElement;

UCLASS(Blueprintable)
class UNION_API AMenuResourcePreloader : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMenuResourceElement*> Elements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMenuResourceElement> ElementClass;
    
public:
    AMenuResourcePreloader(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartLoad();
    
    UFUNCTION(BlueprintCallable)
    void SetupPlayerCount(int32 localPlayerNum);
    
    UFUNCTION(BlueprintCallable)
    void NotifyChangeCursorByIndexWithPlayerIndex(int32 PlayerIndex, int32 CursorIndex);
    
    UFUNCTION(BlueprintCallable)
    void NotifyChangeCursorByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void NotifyChangeCursor(int32 RowIndex, int32 ColumnIndex);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(int32 InRowNum, int32 InColumnNum, int32 FirstRowIndex, int32 FirstColumnIndex, int32 LoadCount, TSubclassOf<UMenuResourceElement> Class, TArray<UMenuResourceElement*>& OutElements);
    
    UFUNCTION(BlueprintCallable)
    void FinishLoad();
    
};


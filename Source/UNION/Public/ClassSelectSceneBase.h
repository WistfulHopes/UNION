#pragma once
#include "CoreMinimal.h"
#include "EMenuSpeedClassId.h"
#include "UnionUISceneBase.h"
#include "ClassSelectSceneBase.generated.h"

class UClassSelectButtonBase;
class UClassSelectTrophyUI;
class UGrandPrixTrophyUI;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UClassSelectSceneBase : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UClassSelectButtonBase*> ClassSelectButtonArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGrandPrixTrophyUI*> GrandPrixTrophyArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UClassSelectTrophyUI*> ClassSelectTrophyArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ClassSelect_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ClassSelect_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ClassSelect_Out;
    
    UClassSelectSceneBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTrophy();
    
    UFUNCTION(BlueprintCallable)
    void SaveLastFocusedMenuSpeedClassId(EMenuSpeedClassId SpeedClassId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeButtonsPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMenuSpeedClassId GetLastFocusedMenuSpeedClassId();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusToLastClassContent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AllButtonActive();
    
};


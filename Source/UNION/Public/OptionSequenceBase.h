#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OptionSequenceBase.generated.h"

class UDataTable;
class UOptionCommonAsset;
class UOptionWidget;
class UPrimaryDataAsset;
class UUnionUIButtonBase;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UOptionSequenceBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOptionCommonAsset> CommonAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> CellTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPrimaryDataAsset> IndicatorData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionWidget* TopOptionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* BaseCloseConfirmPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* BaseRevertConfirmPopup;
    
public:
    UOptionSequenceBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestRevert();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRevertConfirmDecision(UUnionUIButtonBase* Button, int32 panelIdx, int32 buttonIdx);
    
    UFUNCTION(BlueprintCallable)
    void OnCloseConfirmDecision(UUnionUIButtonBase* Button, int32 panelIdx, int32 buttonIdx);
    
};


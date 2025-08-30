#pragma once
#include "CoreMinimal.h"
#include "ERivalTeamId.h"
#include "UnionUIButtonStandard.h"
#include "PartyRaceRivalTeamButton.generated.h"

class UCanvasPanel;
class UCommonRivalLevelWidget;
class UImage;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UPartyRaceRivalTeamButton : public UUnionUIButtonStandard {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* _RootCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _CharaImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _MachineImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRivalLevelWidget* _TeamLevelWidget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RivalNext_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RivalNext_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RivalNext_Out;
    
    UPartyRaceRivalTeamButton();

    UFUNCTION(BlueprintCallable)
    void UpdateDisplay(ERivalTeamId RivalTeamId);
    
    UFUNCTION(BlueprintCallable)
    void Out();
    
    UFUNCTION(BlueprintCallable)
    void Loop();
    
    UFUNCTION(BlueprintCallable)
    void In();
    
};


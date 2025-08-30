#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RaceUISubTeamGroupAll.generated.h"

class URaceUISubTeamGroup;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubTeamGroupAll : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URaceUISubTeamGroup*> TeamGroup;
    
    URaceUISubTeamGroupAll();

};


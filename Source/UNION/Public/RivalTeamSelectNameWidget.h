#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RivalTeamSelectNameWidget.generated.h"

class UImage;
class UTexture2D;
class UUnionRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class URivalTeamSelectNameWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DMY_RivalTeamBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_TeamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> TextureTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextSecrets;
    
public:
    URivalTeamSelectNameWidget();

};


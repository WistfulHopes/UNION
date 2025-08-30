#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RaceUISubTeamGroup.generated.h"

class UImage;
class URichTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubTeamGroup : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TextYou;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ImgRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ImgCharaIcon;
    
    URaceUISubTeamGroup();

    UFUNCTION(BlueprintCallable)
    void SetRankNative(int32 Rank);
    
    UFUNCTION(BlueprintCallable)
    void SetDispTextYou(bool IsDisp);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaIconNative(UTexture2D* IconTex);
    
};


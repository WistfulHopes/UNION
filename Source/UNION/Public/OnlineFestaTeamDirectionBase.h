#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UnionUISceneBase.h"
#include "FestaTeamDirectionAnimFinishedDelegateDelegate.h"
#include "OnlineFestaTeamDirectionBase.generated.h"

class UImage;
class UTexture2D;
class UUnionRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UOnlineFestaTeamDirectionBase : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFestaTeamDirectionAnimFinishedDelegate OnTeamDecideAnimFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CutInImageObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TeamBaseBand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TeamDecideTextBlock;
    
    UOnlineFestaTeamDirectionBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTeamColorEvent(const TArray<FLinearColor>& InTeamColors, int32 InMyTeamIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayDecideTeamEvent(int32 InMyTeamIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadFestaTeamTextures(const TSoftObjectPtr<UTexture2D>& InDecideTeamCutInPtr, const TArray<TSoftObjectPtr<UTexture2D>>& InFestaDirectionIcons);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadFestaTeamIconTextures(const TArray<TSoftObjectPtr<UTexture2D>>& InFestaDirectionIcons);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FestaTeamDecideSceneInit();
    
};


#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Components/RichTextBlockImageDecorator.h"
#include "Components/RichTextBlockImageDecorator.h"
#include "UnionRichTextBlockImageDecorator.generated.h"

class UDataTable;
class UObject;

UCLASS(Blueprintable)
class UNIONUI_API UUnionRichTextBlockImageDecorator : public URichTextBlockImageDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OverrideImageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEachPlayerSetting;
    
    UUnionRichTextBlockImageDecorator();

    UFUNCTION(BlueprintCallable)
    void SetPlayerIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetEachPlayer(bool InEachPlayer);
    
    UFUNCTION(BlueprintCallable)
    void FindRichSlateBrush(FName TagOrId, FSlateBrush& OutSlateBrush);
    
    UFUNCTION(BlueprintCallable)
    void FindRichImageRow(FName TagOrId, FRichImageRow& OutRichImageRow);
    
    UFUNCTION(BlueprintCallable)
    void FindResorceObject(FName TagOrId, UObject* OutObject);
    
};


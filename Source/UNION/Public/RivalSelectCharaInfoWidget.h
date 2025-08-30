#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RivalSelectCharaInfoWidget.generated.h"

class UUnionRichTextBlock;
class UUnionUITextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API URivalSelectCharaInfoWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* _CharaNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* _CharaFlavorTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUITextBlock* _BattleCountTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* _WinCountTitleTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUITextBlock* _WinCountTextBlock;
    
public:
    URivalSelectCharaInfoWidget();

};


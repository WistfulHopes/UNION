#pragma once
#include "CoreMinimal.h"
#include "UnionUIInputWidget.h"
#include "TutorialTextDispTime.h"
#include "PopupWindowTutorial.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPopupWindowTutorial : public UUnionUIInputWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTutorialTextDispTime> TextDispTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSetText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DispTextIndex;
    
    UPopupWindowTutorial();

    UFUNCTION(BlueprintCallable)
    void ResetDispText();
    
    UFUNCTION(BlueprintCallable)
    bool IsTextDisp(float MovieTime, bool IsRepeat);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RivalSelectCharaCutInWidget.generated.h"

class UImage;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API URivalSelectCharaCutInWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CharaCutIn_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CharaCutIn_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _CharaImage;
    
public:
    URivalSelectCharaCutInWidget();

};


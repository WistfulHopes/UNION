#pragma once
#include "CoreMinimal.h"
#include "UnionErrorViewer.h"
#include "UnionUIErrorViewer.generated.h"

class UUnionUIPopupWindowBase;

UCLASS(Blueprintable)
class UNIONUI_API UUnionUIErrorViewer : public UUnionErrorViewer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* m_ErrorWindow;
    
public:
    UUnionUIErrorViewer();

};


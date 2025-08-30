#pragma once
#include "CoreMinimal.h"
#include "Fonts/SlateFontInfo.h"
#include "Blueprint/UserWidget.h"
#include "EOSUserInterface_EnterDevicePinCode.h"
#include "EOSDefaultUserInterface_EnterDevicePinCode.generated.h"

class UEOSUserInterface_EnterDevicePinCode_Context;

UCLASS(Blueprintable, EditInlineNew)
class REDPOINTEOSAUTH_API UEOSDefaultUserInterface_EnterDevicePinCode : public UUserWidget, public IEOSUserInterface_EnterDevicePinCode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo TitleFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo RegularFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUserInterface_EnterDevicePinCode_Context* Context;
    
    UEOSDefaultUserInterface_EnterDevicePinCode();


    // Fix for true pure virtual functions not being implemented
};


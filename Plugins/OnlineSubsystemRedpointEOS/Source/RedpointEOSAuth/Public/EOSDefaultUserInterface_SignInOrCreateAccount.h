#pragma once
#include "CoreMinimal.h"
#include "Fonts/SlateFontInfo.h"
#include "Blueprint/UserWidget.h"
#include "EOSUserInterface_SignInOrCreateAccount.h"
#include "EOSDefaultUserInterface_SignInOrCreateAccount.generated.h"

class UEOSUserInterface_SignInOrCreateAccount_Context;

UCLASS(Blueprintable, EditInlineNew)
class REDPOINTEOSAUTH_API UEOSDefaultUserInterface_SignInOrCreateAccount : public UUserWidget, public IEOSUserInterface_SignInOrCreateAccount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo TitleFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo RegularFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUserInterface_SignInOrCreateAccount_Context* Context;
    
    UEOSDefaultUserInterface_SignInOrCreateAccount();


    // Fix for true pure virtual functions not being implemented
};


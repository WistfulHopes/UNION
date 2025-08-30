#include "CommonUIController.h"

UCommonUIController::UCommonUIController() : UUserWidget(FObjectInitializer::Get()) {
    this->Overlay_Trigger_L = NULL;
    this->Arrow_Down_Trigger_L = NULL;
    this->Image_Release_L = NULL;
    this->WidgetSwitcher_Trigger_L_TXT = NULL;
    this->TXT_Btn_Trigger_L_Hold = NULL;
    this->TXT_Btn_Trigger_L_Release = NULL;
    this->Overlay_Trigger_R = NULL;
    this->Arrow_Down_Trigger_R = NULL;
    this->Image_Release_R = NULL;
    this->WidgetSwitcher_Trigger_R_TXT = NULL;
    this->TXT_Btn_Trigger_R_Hold = NULL;
    this->TXT_Btn_Trigger_R_Release = NULL;
    this->Overlay_StkL = NULL;
    this->Arrow_StkL_L = NULL;
    this->Arrow_StkL_R = NULL;
    this->Arrow_StkL_B = NULL;
    this->Arrow_StkL_T = NULL;
    this->WidgetSwitcher_StkL = NULL;
    this->TXT_StkL_Hold = NULL;
    this->TXT_StkL_Release = NULL;
    this->Overlay_StkR = NULL;
    this->Arrow_StkR_L = NULL;
    this->Arrow_StkR_R = NULL;
    this->Arrow_StkR_B = NULL;
    this->Arrow_StkR_T = NULL;
    this->WidgetSwitcher_StkR = NULL;
    this->TXT_StkR_Hold = NULL;
    this->TXT_StkR_Release = NULL;
    this->Overlay_Direction = NULL;
    this->Arrow_Direction_L = NULL;
    this->Arrow_Direction_R = NULL;
    this->Arrow_Direction_B = NULL;
    this->Arrow_Direction_T = NULL;
    this->WidgetSwitcher_Direction = NULL;
    this->TXT_Direction_Hold = NULL;
    this->TXT_Direction_Release = NULL;
    this->Overlay_4Btn = NULL;
    this->Guide_Btn1 = NULL;
    this->Guide_Btn2 = NULL;
    this->Guide_Btn3 = NULL;
    this->Guide_Btn4 = NULL;
    this->WidgetSwitcher_4Btn = NULL;
    this->TXT_4Btn_Hold = NULL;
    this->TXT_4Btn_Release = NULL;
}

void UCommonUIController::SetupTable(const FTutorialControllerKeysTable& InTable) {
}



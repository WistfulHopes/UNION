#include "TitleScene.h"

UTitleScene::UTitleScene() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->Window_In = NULL;
    this->Window_Loop = NULL;
    this->Window_Out = NULL;
}


void UTitleScene::SetDevInfoText(UTextBlock* InVersionText, UTextBlock* InEOSRelayControlText, UTextBlock* InNetworkSettingText, UTextBlock* InCRMInfoText, UTextBlock* InMatchingSettingText) {
}







FString UTitleScene::GetVersion() {
    return TEXT("");
}



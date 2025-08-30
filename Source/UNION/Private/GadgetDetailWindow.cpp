#include "GadgetDetailWindow.h"

UGadgetDetailWindow::UGadgetDetailWindow() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerIndex = 0;
}


FText UGadgetDetailWindow::GetRaceButtonText(int32 InPlayerIndex, uint8 InputType, const FText& InText) {
    return FText::GetEmpty();
}

void UGadgetDetailWindow::ChangeInputTypeIF_Implementation(EAppControllerInputType InNewControllerInputType) {
}



#include "CommonCountNumberWidget.h"

UCommonCountNumberWidget::UCommonCountNumberWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CurrentNumber = 0;
}




void UCommonCountNumberWidget::StartCount() {
}

void UCommonCountNumberWidget::Setup(int32 InStartNumber, int32 InEndNumber) {
}



void UCommonCountNumberWidget::SetEndWait(float InEndWait) {
}

void UCommonCountNumberWidget::SetCountWaitByMaxEndTime(float InMaxEndTime) {
}

void UCommonCountNumberWidget::SetCountWait(float InCountWait) {
}









void UCommonCountNumberWidget::EndCount() {
}

bool UCommonCountNumberWidget::CheckCountStart() {
    return false;
}

bool UCommonCountNumberWidget::CheckCountEnd() {
    return false;
}



#include "CommonMenuControllerCross.h"

UCommonMenuControllerCross::UCommonMenuControllerCross() : UUserWidget(FObjectInitializer::Get()) {
    this->Up = NULL;
    this->Right = NULL;
    this->Bottom = NULL;
    this->Left = NULL;
    this->CurrentKey = NULL;
}

void UCommonMenuControllerCross::SetKeyIndex(int32 InKeyIndex) {
}

void UCommonMenuControllerCross::SetKey(const FKey& InKey) {
}



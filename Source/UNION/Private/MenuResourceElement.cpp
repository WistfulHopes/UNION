#include "MenuResourceElement.h"

UMenuResourceElement::UMenuResourceElement() {
}

void UMenuResourceElement::SetEmpty(bool bInIsEmpty) {
}

void UMenuResourceElement::OnUnloadResource_Implementation() {
}

void UMenuResourceElement::OnLoadResource_Implementation() {
}

bool UMenuResourceElement::IsLoading() const {
    return false;
}

bool UMenuResourceElement::IsEmpty() const {
    return false;
}

int32 UMenuResourceElement::GetRowIndex() const {
    return 0;
}

int32 UMenuResourceElement::GetColumnIndex() const {
    return 0;
}

int32 UMenuResourceElement::GetAllIndex() const {
    return 0;
}



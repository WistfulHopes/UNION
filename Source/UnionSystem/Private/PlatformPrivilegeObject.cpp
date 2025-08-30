#include "PlatformPrivilegeObject.h"

APlatformPrivilegeObject::APlatformPrivilegeObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void APlatformPrivilegeObject::RequestStart() {
}

bool APlatformPrivilegeObject::IsSuccess() const {
    return false;
}

bool APlatformPrivilegeObject::IsEnd() const {
    return false;
}



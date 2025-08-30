#include "UnionCrossPlayResolveWindowManager.h"

AUnionCrossPlayResolveWindowManager::AUnionCrossPlayResolveWindowManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CrossPlayChangedWindowClass = NULL;
    this->m_CrossPlayChangedWindow = NULL;
}



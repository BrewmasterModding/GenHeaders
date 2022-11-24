#include "BMAttachPointID.h"

FBMAttachPointID::FBMAttachPointID() {
    this->bIsValid = false;
    this->bIsSocket = false;
    this->bIsClipPoint = false;
    this->ClipPointBegin = 0;
    this->ClipPointSize = 0;
    this->AttachToComponent = NULL;
}


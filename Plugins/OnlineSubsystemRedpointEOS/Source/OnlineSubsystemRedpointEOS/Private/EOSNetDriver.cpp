#include "EOSNetDriver.h"
#include "EOSNetConnection.h"

UEOSNetDriver::UEOSNetDriver() : UIpNetDriver(FObjectInitializer::Get()) {
    this->NetConnectionClassName = TEXT("/Script/OnlineSubsystemRedpointEOS.EOSNetConnection");
    this->NetConnectionClass = UEOSNetConnection::StaticClass();
    this->ChannelDefinitions.AddDefaulted(4);
}



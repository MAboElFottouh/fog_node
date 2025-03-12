#ifndef __FOG_APP_H
#define __FOG_APP_H

#include <omnetpp.h>

using namespace omnetpp;

class FogApp : public cSimpleModule {
  protected:
    virtual void initialize() override;
    virtual void handleMessage(cMessage *msg) override;
};

#endif

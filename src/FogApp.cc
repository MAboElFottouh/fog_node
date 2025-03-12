#include "FogApp.h"
Define_Module(FogApp);

void FogApp::initialize() {
    EV << "Fog Node Initialized!\n";
}

void FogApp::handleMessage(cMessage *msg) {
    EV << "Message received in Fog Node!\n";
    delete msg;
}

//
// Created by Spare on 6/16/2025.
//

#include "../include/SandboxApp.h"
#include "App.h"

SandboxApp::SandboxApp(): App() {
}

SandboxApp::~SandboxApp() {
}

Maple::App* Maple::CreateApplication() {
    return new SandboxApp();
}
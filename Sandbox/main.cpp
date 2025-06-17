//
// Created by Spare on 6/16/2025.
//

// Defines entry point for engine
#include "Engine.h"
#include "SandboxApp.h"

int main() {
    const auto app = new SandboxApp();
    Maple::RunEngine(app);
}
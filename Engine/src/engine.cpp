//
// Created by Spare on 6/17/2025.
//

#include "../include/Engine.h"

#include "App.h"
#include "Log.h"

namespace Maple {
    int RunEngine(App *Application) {
        const auto logEngine = std::make_shared<Log>();
        logEngine->info("Maple Engine");

        Application->Start();
        delete Application;
        return 0;
    }
}

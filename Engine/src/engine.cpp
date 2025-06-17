//
// Created by Spare on 6/17/2025.
//

#include "../include/Engine.h"

#include "App.h"
#include "Log.h"

namespace Maple {
    int RunEngine(App *Application) {
        Log::Init();

        Application->Start();
        delete Application;
        return 0;
    }
}

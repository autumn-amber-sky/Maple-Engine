//
// Created by Spare on 6/17/2025.
//

#include "../include/Engine.h"

#include "App.h"

namespace Maple {
    int RunEngine(App *Application) {
        Application->Start();
        delete Application;
        return 0;
    }
}

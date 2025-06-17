//
// Created by Spare on 6/16/2025.
//

#pragma once

#include "MapleCore.h"

namespace Maple {



    class MAPLE_API App {
    public:
        App();
        virtual ~App();
        void Start();
    };

    // To be defined in application executable
    App* CreateApplication();

}

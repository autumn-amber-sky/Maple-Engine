//
// Created by Spare on 6/17/2025.
//

#pragma once

#include "MapleCore.h"
#include <memory>
#include "spdlog/spdlog.h"

namespace Maple {
    class MAPLE_API Log {
    public:
        static void Init();

        static std::shared_ptr<spdlog::logger>& GetEngineLogger() { return engineLogger; }
        static std::shared_ptr<spdlog::logger>& GetAppLogger() { return appLogger; }
    private:
        static std::shared_ptr<spdlog::logger> engineLogger;
        static std::shared_ptr<spdlog::logger> appLogger;

    };
}

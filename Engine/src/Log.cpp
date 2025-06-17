//
// Created by Spare on 6/17/2025.
//

#include "../include/Log.h"
#include "spdlog/sinks/stdout_color_sinks-inl.h"

namespace Maple{

    // allocate memory for static members
    std::shared_ptr<spdlog::logger> Log::engineLogger = nullptr;
    std::shared_ptr<spdlog::logger> Log::appLogger = nullptr;

    void Log::Init() {

        // todo: rework to custom pattern?
        // make log instanceable, and define loggers for different major processes within the engine
        // also allow end user to define any number of custom loggers for client programs
        spdlog::set_pattern("%^[%T] %n: %v%$");
        engineLogger = spdlog::stdout_color_mt("MapleEngine");
        engineLogger->set_level(spdlog::level::trace);
        appLogger = spdlog::stdout_color_mt("application");
        appLogger->set_level(spdlog::level::trace);

        // log self activation
        engineLogger->info("Log initialized");
    }
}

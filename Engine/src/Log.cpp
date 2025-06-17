//
// Created by Spare on 6/17/2025.
//

#include "../include/Log.h"

#include "spdlog/sinks/stdout_color_sinks-inl.h"

namespace Maple {
    std::shared_ptr<spdlog::logger> Log::engineLogger = nullptr;
    std::shared_ptr<spdlog::logger> Log::applicationLogger = nullptr;

    void Log::Init() {
        spdlog::set_pattern("%^[%T] %n: %v%$");

        engineLogger = spdlog::stdout_color_mt("MapleEngine");
        engineLogger->set_level(spdlog::level::trace);
        engineLogger->info("Maple Engine - Logger Established");

        applicationLogger = spdlog::stdout_color_mt("MapleApplication");
        applicationLogger->set_level(spdlog::level::trace);
        applicationLogger->info("Maple Application - Logger Established");
    }
}


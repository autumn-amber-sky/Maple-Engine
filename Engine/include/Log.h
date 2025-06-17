//
// Created by Spare on 6/17/2025.
//

#pragma once

#include <spdlog/spdlog.h>
#include <memory>
#include <string>

namespace Maple {
    class Log {
    public:
        Log() = default;
        ~Log() = default;
        static void Init();
        static std::shared_ptr<spdlog::logger> engineLogger;
        static std::shared_ptr<spdlog::logger> applicationLogger;
    };

// Maple Engine Logs
#define MAPLE_ENGINE_TRACE(...)  ::Maple::Log::engineLogger->trace(__VA_ARGS__)
#define MAPLE_ENGINE_INFO(...)   ::Maple::Log::engineLogger->info(__VA_ARGS__)
#define MAPLE_ENGINE_WARN(...)   ::Maple::Log::engineLogger->warn(__VA_ARGS__)
#define MAPLE_ENGINE_ERROR(...)  ::Maple::Log::engineLogger->error(__VA_ARGS__)

// Maple Application Logs
#define MAPLE_APP_TRACE(...)  ::Maple::Log::applicationLogger->trace(__VA_ARGS__)
#define MAPLE_APP_INFO(...)   ::Maple::Log::applicationLogger->info(__VA_ARGS__)
#define MAPLE_APP_WARN(...)   ::Maple::Log::applicationLogger->warn(__VA_ARGS__)
#define MAPLE_APP_ERROR(...)  ::Maple::Log::applicationLogger->error(__VA_ARGS__)
}


//
// Created by Spare on 6/17/2025.
//

#include "../include/Log.h"

#include "spdlog/sinks/stdout_color_sinks-inl.h"

namespace Maple {
    bool Log::isFormatDefined = false;

    Log::Log() {
        spdlog::set_pattern("%^[%T] %n: %v%$");
        logger = spdlog::stdout_color_mt("MapleEngine");
        logger->set_level(spdlog::level::trace);
    }

    void Log::trace(const std::string &msg) const {
        logger->trace(msg);
    }

    void Log::info(const std::string &msg) const {
        logger->info(msg);
    }

    void Log::warning(const std::string &msg) const {
        logger->warn(msg);
    }

    void Log::error(const std::string &msg) const {
        logger->error(msg);
    }
}

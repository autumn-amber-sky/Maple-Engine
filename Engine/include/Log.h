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
        Log();
        ~Log() = default;
        void trace(const std::string &msg) const;
        void info(const std::string &msg) const;
        void warning(const std::string &msg) const;
        void error(const std::string &msg) const;
    private:
        static bool isFormatDefined;
        std::shared_ptr<spdlog::logger> logger;
    };
}
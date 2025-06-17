//
// Created by Spare on 6/16/2025.
//

#pragma once

#ifdef MAPLE_PLATFORM_WINDOWS
//  windows only compile symbol (cmake config???)
#endif

#ifdef MAPLE_ENGINE_EXPORTS
#  define MAPLE_API __declspec(dllexport)
#else
#  define MAPLE_API __declspec(dllimport)
#endif
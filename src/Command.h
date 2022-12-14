#pragma once

#include "Context.h"
#include "Option.h"
#include <string>
#include <vector>

namespace Clipp {

    struct Command {
        std::string_view Name;
        std::string_view Usage;
        std::vector<std::string_view> Aliases;
        std::vector<Option> Options;
        std::function<void(const Context&)> Action;

        bool hasOption(std::string_view name) const;

        const Option* getOption(std::string_view name) const;
    };
}
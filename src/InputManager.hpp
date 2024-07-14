#pragma once

#include "GLOBALS.hpp"

class InputManager {
    static unordered_map<string, bool> _keyStates;  // STATIC INIT (see .cpp)
public:
    InputManager()  = default;
    ~InputManager() = default;
    [[nodiscard]] static unordered_map<string, bool>& getKeyStates();
};

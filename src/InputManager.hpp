#pragma once

#include "GLOBALS.hpp"

class InputManager {
    static unordered_map<string, bool> _keyState;  // STATIC INIT (see .cpp)
public:
    InputManager()  = default;
    ~InputManager() = default;
    [[nodiscard]] static unordered_map<string, bool>& getKeyState();
};
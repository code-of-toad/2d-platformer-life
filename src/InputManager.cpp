#include "InputManager.hpp"

// STATIC INIT
unordered_map<string, bool> InputManager::_keyState = [] {
    unordered_map<string, bool> m;
    m["Left" ] = false;
    m["Right"] = false;
    m["Up"   ] = false;
    m["Down" ] = false;

    m["Esc"] = false;

    return m;
} ();

unordered_map<string, bool>& InputManager::getKeyState() {
    return _keyState;
}

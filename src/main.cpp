#include <SFML/Graphics.hpp>
#include "InputManager.hpp"

// bool DEBUG = true;
bool DEBUG = false;

int main() {
    // WINDOW SETUP
    // ------------
    sf::RenderWindow window(sf::VideoMode(SCREEN_W, SCREEN_H), "2D Platformer Life");
    window.setFramerateLimit(FPS);

    unordered_map<string, bool>& keyState = InputManager::getKeyState();

    sf::Event event{};
    sf::Clock clock;
    float dt = clock.restart().asSeconds();
    // GAME LOOP
    // ---------
    while (window.isOpen()) {
        // EVENT HANDLER
        // -------------
        while (window.pollEvent(event)) {
            switch (event.type) {
                case sf::Event::Closed:
                    window.close();
                    return EXIT_SUCCESS;
                // KEYBOARD INPUT: Pressed
                case sf::Event::KeyPressed:
                    switch (event.key.code) {
                        case sf::Keyboard::Left:
                            keyState["Left" ] = true;
                            break;
                        case sf::Keyboard::Right:
                            keyState["Right"] = true;
                            break;
                        case sf::Keyboard::Up:
                            keyState["Up"   ] = true;
                            break;
                        case sf::Keyboard::Down:
                            keyState["Down" ] = true;
                            break;
                        case sf::Keyboard::Escape:
                            keyState["Esc"  ] = true;
                            break;
                        default:
                            break;
                    }
                    break;
                // KEYBOARD INPUT: Released
                case sf::Event::KeyReleased:
                    switch (event.key.code) {
                        case sf::Keyboard::Left:
                            keyState["Left" ] = false;
                            break;
                        case sf::Keyboard::Right:
                            keyState["Right"] = false;
                            break;
                        case sf::Keyboard::Up:
                            keyState["Up"   ] = false;
                            break;
                        case sf::Keyboard::Down:
                            keyState["Down" ] = false;
                            break;
                        case sf::Keyboard::Escape:
                            keyState["Esc"  ] = false;
                            break;
                        default:
                            break;
                    }
                    break;
                default:
                    break;
            }
        }

        // UPDATE & GAME LOGIC
        // -------------------
        if (DEBUG) {  // DEBUGGGGGGGGGGGGGGGGGG
            cout << "Keys Pressed: ";
            for (const auto& key : keyState) {
                if (key.second) {
                    cout << key.first << " ";
                }
            } cout << endl;
        }

        if (keyState["Esc"]) {
            window.close();
            return EXIT_SUCCESS;
        }

        // RENDER DISPLAY
        // --------------
        window.clear();
        // window.draw();
        window.display();
    }

    return 0;
}
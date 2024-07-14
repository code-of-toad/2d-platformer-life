#include <SFML/Graphics.hpp>
#include "GLOBALS.hpp"

int main() {
    // WINDOW SETUP
    // ------------
    sf::RenderWindow window(sf::VideoMode(SCREEN_W, SCREEN_H), "2D Platformer Life");
    window.setFramerateLimit(FPS);

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
                // -----------------------
                case sf::Event::KeyPressed:
                    switch (event.key.code) {
                        case sf::Keyboard::Left:
                            cout << "KEY_PRESSED: Left" << endl;
                            break;
                        case sf::Keyboard::Right:
                            cout << "KEY_PRESSED: Right" << endl;
                            break;
                        case sf::Keyboard::Up:
                            cout << "KEY_PRESSED: Up" << endl;
                            break;
                        case sf::Keyboard::Down:
                            cout << "KEY_PRESSED: Down" << endl;
                            break;
                        default:
                            break;
                    }
                    break;
                // KEYBOARD INPUT: Released
                // ------------------------
                case sf::Event::KeyReleased:
                    switch (event.key.code) {
                        case sf::Keyboard::Left:
                            cout << "KEY_RELEASED: Left" << endl;
                            break;
                        case sf::Keyboard::Right:
                            cout << "KEY_RELEASED: Right" << endl;
                            break;
                        case sf::Keyboard::Up:
                            cout << "KEY_RELEASED: Up" << endl;
                            break;
                        case sf::Keyboard::Down:
                            cout << "KEY_RELEASED: Down" << endl;
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
        // RENDER DISPLAY
        // --------------
        window.clear();
        // window.draw();
        window.display();
    }

    return 0;
}
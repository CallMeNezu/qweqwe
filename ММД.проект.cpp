#include <iostream>
#include "windows.h" 
enum home_screen
{
    PLAY = 112,
    QUIT = 113,
    STATISTICS = 105
};
struct stats {
    char name[20];
    int heal;
    int strong;
    int charisma;
    int healing;
};
int main()
{
    char start;
    do {
        std::cout << "Welcome to our project" << std::endl;
        std::cout << "Play - p" << std::endl;
        std::cout << "quit - q" << std::endl;
        std::cin >> start;
        switch (start) {
        case PLAY: {
            std::cout << "background....\n";
            Sleep(1000);
            std::cout << ". ";
            Sleep(1000);
            std::cout << ". ";
            Sleep(1000);
            std::cout << ". \n";
            Sleep(1000);
            std::cout << "Damn, I forgot...\n";
            Sleep(3000);
            std::cout << "That's right! You fell into some kind of hole. \n";
            Sleep(2000);
            std::cout << "Get out of here.\n";
            Sleep(750);
            std::cout << "The pancakes are getting cold at home.\n";
            break;
        }
        case QUIT: {
            return 0;
        }
        default:
            std::cout << "qweqweqwe";
        }
    } while (start != 'q' && start != 'p');//всё до этой строчки нач экран 
    
    std::cout << "\nwhat is your name?\n";
    stats player;
    player.name;
    player.heal = 100;
    player.strong = 100;
    player.charisma = 25;
    player.healing = 25;
    std::cin >> player.name;

}
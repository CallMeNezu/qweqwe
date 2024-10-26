#include <iostream>
#include "windows.h" 
enum home_screen
{
    PLAY = 112,
    QUIT = 113
};
struct player {
    int heal;
    int strong;
    int charisma;

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
            //хубабуба мяумяумяу
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
            std::cout << "Get out of here.";
            Sleep(750);
            std::cout << "The pancakes are getting cold at home.";
        }
        case QUIT: {
            break;
        }
        default:
            std::cout << "qweqweqwe";
        }


    } while (start != 'q' && start != 'p');//всё до этой строчки нач экран 
    std::cout << "\ncheck";

}
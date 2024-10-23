#include <iostream>

enum home_screen
{
    PLAY = 1,
    QUIT = 2
};

int main()
{
    int player;
    char pasword[15] = "qweq";

    do {
        std::cout << "Welcome to our project" << std::endl;
        std::cout << "Play - 1" << std::endl;
        std::cout << "quit - 2" << std::endl;
        std::cin >> player;

        switch (player){
        case PLAY: {
            //хубабуба мяумяумяу
        }
        case QUIT: {
            break;
        }
        default:
            std::cout << "qweqweqwe";
        }


    } while (player != 2);
    return 0;
}
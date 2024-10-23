#include <iostream>

enum home_screen
{
    PLAY = 1,
    QUIT = 2
};

int main()
{
    int player;
    char pasword[15];

    do {
        std::cout << "Welcome to our project" << std::endl;
        std::cout << "Play - 1" << std::endl;
        std::cout << "quit - 2" << std::endl;
        std::cin >> pasword;

        switch (player){
        case PLAY: {
            //хубабуба мяумяумяу
        }
        case QUIT: {
            break;
        }
        }


    } while (player != 2);
}
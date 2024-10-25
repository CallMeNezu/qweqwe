#include <iostream>

enum home_screen
{
    PLAY = 1,
    QUIT = 2
};

void dead(int q) {
    if (q == 0) {
        std::cout << "you are dead. want to be reborn?";
    }
}

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
            std::cout << "sorry there's nothing here yet";
            break;
        }
        case QUIT: {
            break;
        }
        default:
            std::cout << "qweqweqwe";
        }


    } while (player != 2);


}
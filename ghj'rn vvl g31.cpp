#include <iostream>

enum home_screen
{
    PLAY = 80,
    QUIT = 81
};

void dead(int q) {
    if (q == 0) {
        std::cout << "you are dead. want to be reborn?";
    }
}

int main()
{
    char player;
    char pasword[15] = "qweq";

    do {
        std::cout << "Welcome to our project" << std::endl;
        std::cout << "Play - p" << std::endl;
        std::cout << "quit - q" << std::endl;
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

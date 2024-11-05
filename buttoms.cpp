#pragma once
#include <iostream>
#include "windows.h"
void interface_buttons(int& a, int& b, int& c, int& d) {//перенос стат 
    bool click = false;
    char plus_point_to_a_specific_stat;
    while (true) {
        if (GetAsyncKeyState('e')) //принажатии на кнопку е открываеться  
        {
            click = true;
        }
        else if (GetAsyncKeyState('r')) //при нажатии на r закрываеться 
        {
            click = false;
        }
        if (click == true) {
            std::cout << "enter 'h' to give a health point\n";
            std::cout << "enter 'j' to give a strong point\n";
            std::cout << "enter 'k' to give a charisma point\n";
            std::cout << "enter 'l' to give a healing point\n";
            std::cout << "press 'q' to exit\n";
            std::cin >> plus_point_to_a_specific_stat;
            if (plus_point_to_a_specific_stat == 'h') {

            }
        }
    }
}
// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class asset_type {texture, sound, animation, script};
enum class menu_section {background, music, sound, controls, texture};

int main(){
    int sound = 8;
    int asset_value;

    asset_value = sound;

    std::cout << "asset_value = " << asset_value << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}

// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Andrew Ten-Den
// Created on: March 2022
// This program lets the user classify an integer


#include <iostream>


int main() {
    // this function lets the user classify an integer
    int integer;

    // input
    std::cout << "Enter an integer: ";
    std::cin >> integer;

    // process
    if (integer > 0) {
        // output
        std::cout << "The number is positive";
    } else if (integer < 0) {
        // output
        std::cout << "The number is negative";
    } else if (integer == 0) {
        // output
        std::cout << "0 is just Zero";
    }

    std::cout << "\n" << std::endl;
    std::cout << "Done." << std::endl;
}

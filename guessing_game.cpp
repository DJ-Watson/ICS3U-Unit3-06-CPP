// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: DJ Watson
// Created on: October 2019
// this program is a guessing game where the user has to guess a number
// that the system has in memory


#include <iostream>
#include <stdlib.h>
#include <ctime>


int main() {
    // variables
    srand(time(NULL));
    const int NUMBER = rand()%10;
    int numinput;
    // input
    std::cout << "guess the number I am thinking of : ";
    std::cin >> numinput;
    std::cout << "" << std::endl;
    // process
    if (numinput == NUMBER) {
        // output
        std::cout << "Correct!";
    } else {
        std::cout << "Incorrect! ";
        std::cout << "Correct number was: " << NUMBER << std::endl;
    }
}

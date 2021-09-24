// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Sept 2021
// This program asks the user's age for dating permission

#include <iostream>


int main() {
    std::string age;
    int integerAsNumber;

    // this function checks if the user follows the age guidelines for dating

    // input
    std::cout << "What is your age: ";
    std::cin >> age;
    std::cout << std::endl;

    // process & output
    try {
        integerAsNumber = std::stoi(age);

        if (integerAsNumber >= 25 & integerAsNumber <= 40) {
            std::cout << "You are allowed to date.";
        } else {
            std::cout << "You are not eligible to date.";
        }
    } catch (std::invalid_argument) {
        std::cout << "You entered an invalid.";
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}

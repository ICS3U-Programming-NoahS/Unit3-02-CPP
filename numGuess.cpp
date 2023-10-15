// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Oct. 15th, 2023
// This program asks the user to guess a number between 0 and 9
// and tells the user if they got it correct.
#include <iomanip>
#include <iostream>

int main() {
    // Declare constants
    const int CORRECT_GUESS = 8;

    // Declare variables
    int userGuess;

    // Get the user's guess
    std::cout << "Guess a number between 0 and 9: ";
    std::cin >> userGuess;

    // Check if user's guess is correct
    if (userGuess == CORRECT_GUESS) {
        std::cout << "You have guessed the correct number" << std::endl;
        std::cout << "" << std::endl;
    }

    // Check if user's guess is incorrect
    if (userGuess != CORRECT_GUESS) {
        std::cout << "You have guessed incorrectly." << std::endl;
        std::cout << "Please try again." << std::endl;
        std::cout << "" << std::endl;
    }
}

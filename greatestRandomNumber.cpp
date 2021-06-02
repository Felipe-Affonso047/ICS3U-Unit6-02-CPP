// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: May 2021
// This program generate random numbers and shows the greatest out of them

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>
#include <array>

template<size_t N>
int greatestNumber(std::array<int, N> listOfNumbers) {
    // This function outputs the greatest number out of a list
    int greatest = 0;

    for (int counter = 0; counter < listOfNumbers.size(); counter ++) {
        if (listOfNumbers[counter] > greatest) {
            greatest = listOfNumbers[counter];
        }
    }

    return greatest;
}

int main() {
    // This function is the main function and generate random numbers
    int greatest;

    std::array<int, 10> numbers;

    std::cout << "10 random numbers:" << std::endl;

    for (int random_number = 0; random_number < 10; random_number ++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(0, 100);
        numbers[random_number] = idist(rgen);
        std::cout << numbers[random_number] << std::endl;
    }

    greatest = greatestNumber(numbers);

    std::cout << "\nThe greatest number is: " << greatest << std::endl;

    std::cout << "\nDone." << std::endl;
}

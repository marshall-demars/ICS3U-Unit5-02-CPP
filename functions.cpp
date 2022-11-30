// Copyright (c) 2022 Marshall Demars All rights reserved

// Created by: Marshall Demars
// Created on: Nov 2022
// This program calculates area of triangle using functions

#include <iostream>

void Area(int base, int height) {
    // This function calculates the area of the triangle
    int area;

    // Process
    area = base * height / 2;

    // Output
    std::cout << "\nThe area of the triangle is " << area << " cm²."
    << std::endl;
}

int main() {
    // This function gets user inputs and does try catch
    std::string base_as_string;
    std::string height_as_string;
    int base;
    int height;

    // Input
    std::cout << "Enter the base length of the triangle (cm): ";
    std::cin >> base_as_string;
    std::cout << "Enter the height of the triangle (cm): ";
    std::cin >> height_as_string;

    // try and catch
    try {
        base = std::stoi(base_as_string);
        height = std::stoi(height_as_string);
        // Call function
        Area(base, height);
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid Input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}

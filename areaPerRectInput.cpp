#include <iostream>

// Copyright (c) 2025 Joanna Keza All rights reserved.
//
// Created by: Joanna Keza
// Date: February 26, 2025
// This program calculates the area and perimeter with the user input.

#include <iostream>

int main() {
// declare variables
int length;
int width;
int area;
int perimeter;
// ask user for length
std::cout << "Enter length of the rectangle (mm): " << std::endl;
std::cin >> length;
// ask user for width
std::cout << "Enter width of the rectangle (mm): " << std::endl;
std::cin >> width;
// calculate the area and perimeter
area = length * width;
perimeter = 2 * (length + width)
    // output
    ;
std::cout
    << "Area: " << area << "mm^2" << std::endl;
std::cout << "Perimeter: " << perimeter << "mm" << std::endl;

}
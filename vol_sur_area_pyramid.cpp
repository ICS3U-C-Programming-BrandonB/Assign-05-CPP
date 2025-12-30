// Copyright (c) 2025 Brandon All rights reserved.
// Created by: Brandon
// Date: December 19th, 2025
// Calculates the surface area and volume of a square pyramid

#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

// Function to calculate surface area
float calculateSurfaceArea(float surBase, float surHeight) {
    float surfaceArea = surBase * surBase + 2.0 * surBase *
    std::sqrt((surBase * surBase / 4.0) + surHeight * surHeight);
    return surfaceArea;
}
// Function to calculate volume
float calculateVolume(float base, float height) {
    float volume = (base * base) * height / 3.0;
    return volume;
}

int main() {
    float base, height;
    // Get user input
    try {
        std::cout << "Enter the base of the Square Pyramid: ";
        std::cin >> base;
        std::cout << "Enter the height of the Square Pyramid: ";
        std::cin >> height;
    } catch (const std::invalid_argument&) {
        std::cout << "Invalid input. Please enter a valid number." << std::endl;
    }
    // Call functions
    float surface_area = calculateSurfaceArea(base, height);
    float volume = calculateVolume(base, height);

    // Display results
    std::cout << "The surface area of the Square Pyramid is: "
              << std::fixed << std::setprecision(2) << surface_area << '\n';
    std::cout << "The volume of the Square Pyramid is: "
              << std::fixed << std::setprecision(2) << volume << '\n';
}

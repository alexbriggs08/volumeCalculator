//
// Created by Alex Briggs on 10/22/24.
//
#include <iostream>

double getUserMetrics (const std::string& prompt) {
    std::cout << "Enter " << prompt << " \n";
    double value {};
    std::cin >> value;
    return value;

}

// Copyright (c) 2026 Victor V-C Name All rights reserved.
// .
// Created by: Victor Victor Calixte
// Date: 09 27, 2026
// This code first takes a diameter value from the user.
// Then it'll calculate the price of the pizza and display it.

#include <iostream>
#include <iomanip>

int main() {
    // Setting constant variables
    const float HST = .13;
    const float RENT = 2.25;
    const int LABOUR = 2;
    const float PIZZACOST = 1.5;
    const float MATERIALS = 1.5;

    // Setting variables
    int diameter;
    float tax;
    float subTotal;
    float total;

    // Asking for diameter
    std::cout << "Enter diameter of pizza (incs): \n";
    std::cin >> diameter;

    // Calculating the subTotal, tax, and total
    subTotal = (MATERIALS * diameter)
    + LABOUR
    + RENT
    + (PIZZACOST * diameter);

    tax = subTotal * HST;
    total = subTotal + tax;

    // Displaying the total
    std::cout << "$" << std::fixed
    << std::setprecision(2)
    << std::setfill('0')
    << total << "\n";
}

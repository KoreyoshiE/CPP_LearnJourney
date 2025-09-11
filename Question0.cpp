#include <iostream>
#include <limits>
#include <iomanip>

// Function to calculate average acceleration
double computeAcceleration(double v1, double v0, double t) {
    return (v1 - v0) / t;
}

int main() {
    double v1, v0, t;

    std::cout << "Enter v1, v0, t (separated by space or newline): ";

    while (true) {
        // Try to read three numbers from input
        if (std::cin >> v1 >> v0 >> t) {
            // Check if time is valid
            if (t <= 0.0) {
                std::cout << "Input error: Time must be greater than 0. Please re-enter v1 v0 t: ";
                continue;  // Ask user to enter values again
            }

            // Calculate and display average acceleration with 2 decimal places
            double a = computeAcceleration(v1, v0, t);
            std::cout << std::fixed << std::setprecision(2);
            std::cout << "The average acceleration is " << a << std::endl;
            break;  // Exit the loop after successful calculation
        } else {
            // If input is invalid (not numbers)
            std::cout << "Input error: Please enter three numeric values (e.g., 10 5 2). Try again: ";
            std::cin.clear();  // Clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
        }
    }

    return 0;
}


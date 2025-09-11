#include <iostream>
#include <limits>
#include <iomanip>

double computeAcceleration(double v1, double v0, double t) {
    return (v1 - v0) / t;
}

int main() {
    double v1, v0, t;

    std::cout << "Enter v1, v0, t (separated by space or newline): ";

    while (true) {
        if (std::cin >> v1 >> v0 >> t) {
            if (t <= 0.0) {
                std::cout << "Input error: Time must be greater than 0. Please re-enter v1 v0 t: ";
                continue;  
            }

            double a = computeAcceleration(v1, v0, t);
            std::cout << std::fixed << std::setprecision(2);
            std::cout << "The average acceleration is " << a << std::endl;
            break;  
        } else {
            std::cout << "Input error: Please enter three numeric values (e.g., 10 5 2). Try again: ";
            std::cin.clear();   
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  
        }
    }

    return 0;
}


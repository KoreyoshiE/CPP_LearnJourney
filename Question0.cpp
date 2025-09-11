#include <iostream>

int main() {
    double initial_velocity, final_velocity, time_interval;
    
    std::cout << "Please input initial velocity, final velocity, and time interval: ";
    std::cin >> final_velocity >> initial_velocity >> time_interval;
    
    if (time_interval > 0.0) {
        double acceleration_value = (final_velocity - initial_velocity) / time_interval;
        std::cout << "Calculated acceleration: " << acceleration_value << std::endl;
    } else {
        std::cout << "Invalid input: Time interval must be a positive value." << std::endl;
    }
    
    return 0;
}

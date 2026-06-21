#include <iostream>
#include <vector>

#include "logistics.hpp"


int main() {
    // List of all routes that are going to be checked.
    std::vector<int> todays_routes = {1002, 5003, 4004, 3007, 2008};

    std::cout << "--- Logistics report ---" << std::endl;
    std::cout << "Todays active routes: ";
    
    // Print out the routes of today.
    print_routes(todays_routes);

    std::cout << "\n--- Analyse of deviations ---" << std::endl;


    for (int i = 0; i < todays_routes.size(); i++) {
        int current_route = todays_routes[i];
        
        if (check_delay(current_route)) {
            std::cout << "Route " << current_route << ": [DEVIATION] - Truck/train delayed!" << std::endl;
        } else {
            std::cout << "Route " << current_route << ": [OK] - On time." << std::endl;
        }
    }

    return 0;
}

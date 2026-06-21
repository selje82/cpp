#include <iostream>
#include <vector>

// Definition to take a vector of int's and return all route numbers.
void print_routes(std::vector<int> routenumber) {

    // Loop and print all the routenumbers. 
    for (int i = 0; i < routenumber.size(); i++) {
        std::cout << routenumber[i] << " ";
    }
    std::cout << "\n" << std::endl;

}

// Definision to check for delays. Odd routenumbers are delayed, even are on time. 
bool check_delay(int routenumber) {
    if (routenumber % 2 == 0) {
        return false;
    } else {
        return true;
    }

}


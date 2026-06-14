#include <iostream>
#include <vector>

int main() {
    // FizzBuzz logic
    for (int num = 1; num <= 50; num++) {
        // First check for FizzBuzz. (% 3 && % 5)
        if (num % 3 == 0 && num % 5 == 0) {
            std::cout << "FizzBuzz" << std::endl;
            // Checking for Fizz. (% 3)
        } else if (num % 3 == 0) {
            std::cout << "Fizz" << std::endl;
            // Checking for Buzz. (% 5)
        } else if (num % 5 == 0) {
            std::cout << "Buzz" << std::endl;
        } else {
            std::cout << num << std::endl;
        }
    }
    
    return 0;
}
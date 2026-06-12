#include <iostream>
#include <string>

void greet(std::string name, int age) {
    std::cout << "Hello " << name << "." << "You are " << age << " years old." << std::endl;
}

int main() {
    
    greet("Glenn", 43);
    return 0;
}
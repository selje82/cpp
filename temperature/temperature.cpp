#include <iostream>
#include <vector>


int main() {

    // Temperatures registred at home the last days. 
    std::vector<double> temps = {19.5, 22.0, 14.5, 13.0, 26.5, 21.0, 18.0};

    // Intro to the program.
    std::cout << "--- Temperature analyze ---" << std::endl;

    // Assigning two variables, one for storing the average temperature and one for storing the sum of temperatures. 
    double avgTemp = 0.0;
    double sumTemp = 0.0;

    // Assigning a variable (double) to check for the highest temperature and a int variable to count cold days.
    double maxTemp = temps[0];
    int coldDays = 0;

    // For-loop to add temperature to sumTemp and to check for maxTemp.  
    for (int elm = 0; elm < temps.size(); elm++) {
        sumTemp += temps[elm];
        if (temps[elm] > maxTemp) {
            maxTemp = temps[elm];
        }
        if (temps[elm] <= 15.0) {
            coldDays++;
        }
    }

    // Calculating the average temperature: avgTemp. 
    avgTemp = sumTemp / temps.size();

    // Writing the output from the calulations.
    std::cout << "Average temperature: " << avgTemp << " Celsius." << std::endl;
    std::cout << "Highest temperature: " << maxTemp << " Celsius." << std::endl;
    std::cout << "Number of cold days (Under 15C): " << coldDays << " days." << std::endl;

    return 0;

}
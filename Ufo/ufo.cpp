#include <iostream>
#include <string>

#include "ufo_functions.hpp"

/*
The premise:

Invaders from outer space have arrived and are abducting humans using tractor beams. Players must crack the codeword to stop the abduction!
*/

int main() {

    // Initializing variables. 
    std::string codeword = "codecademy";
    std::string answer = "__________";
    int misses = 0;

    greet();

    std::vector<char> incorrect; 
    bool guess = false;

    char letter;


    // While-loop tha runs when the answer is not equal to codeword and misses is less than 7. 
    while (answer != codeword && misses < 7) {

        // Outputs number of times the player has tried to guess. 
        display_misses(misses);

        // Display status of incorrect vector and answer string. 
        display_status(incorrect, answer);

        // Get input from player and store it in letter variable. 
        std::cout << "\n\nPlease enter your guess:" << std::endl;
        std::cin >> letter;

        // Check if the guessed letter is in the codeword. 
        for (int i = 0; i < codeword.length(); i++) {
            if (letter == codeword[i]) {
                answer[i] = letter;
                guess = true;
            }
        
        }
        if (guess) {

            std::cout << "\nCorrect! You're closer to cracking the codeword.\n" << std::endl; 
        } else {
            std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n" << std::endl;
            incorrect.push_back(letter);
            
            // Adds one miss to the count for each time the loops run. 
            misses++;
        }

        guess = false;

    }

    // Using the end_game function to check if the player won or lost, and prints a message.
    end_game(codeword, answer);
}
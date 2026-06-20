#include <vector>
#include <string>

// Function for the count of misses. 
void display_misses(int misses);
// Function to greet the player.
void greet();
// Function to end the game and output text.
void end_game(std::string codeword, std::string answer);
// Function to display status of incorrect answer and incorrect guesses.
void display_status(std::vector<char> incorrect, std::string answer);


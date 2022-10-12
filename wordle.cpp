#include <iostream>
#include <cstring>
using namespace std;

// Color text
string red = "\033[1;31m";
string green = "\033[1;32m";
string yellow = "\033[1;33m";
string reset = "\033[0m";

int main() {
  //Establish Variables
  string guess;
  string answer = "LIONS";
  int index;
  int numGuesses = 0;
  char letter;
  
// While loop that checks that guess is not equal to answer and Guesses are less than 6 
  while (guess != answer && numGuesses < 6){
    // Continues giving the user a new guess.
    cout << "Enter a 5 letter guess: ";
    cin >> guess;
    // This while loop will continue asking the user for another guess if string is not 5 letter long.
    while (guess.length() != 5){
      cout << "Not a valid guess! Enter a 5 letter guess: ";
      cin >> guess;
    }
    index = 0;
    // Nested while loop will keep running Nested IF statement until the last letter is checked.
    while (index <= 4){
          letter = guess[index];
          // This nested IF statement will continue running to determine the color if each letter in the user guess.
          if(letter == answer[index]){
               cout << green << letter << reset << endl;
           }else if(letter != answer[0] && letter != answer[1] && letter != answer[2] && letter != answer[3] && letter != answer[4]){
               cout << red << letter << reset << endl; 
           }else{ 
               cout << yellow << letter << reset << endl;
        }
         // This line of code will make sure index is changed to the next letter.
         index = index + 1;
    }
    // This line of code will ensure the users number of guesses changes
    numGuesses = numGuesses + 1;
  }
  // This IF stament lets the user know the outcome of their game and the number of guesses it took.
  if (guess == answer) {
    cout << "You win! Number of Guesses: " << numGuesses;
  }else if (guess != answer) {
    cout << "Sorry, you lost. The answer was: " << answer;
  }

}
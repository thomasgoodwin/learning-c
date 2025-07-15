#include <stdio.h>   // printf
#include <stdbool.h> // true, false

#define MAX_BUFFER_SIZE 512

enum Choice
{
  ROCK,
  PAPER,
  SCISSORS,
  CHOICE_COUNT
};

void gameLoop()
{
  int playerWins = 0;
  int computerWins = 0;
  while (true)
  {
    printf("Please choose between Rock, Paper, or Scissors.\nIf you would like to exit the game, type exit.\n");

    // TODO: Recieve and store user input

    // TODO: Check for exit and exit if necessary

    // TODO: Check if user input is valid/spelled correctly. Reprompt if input is invalid

    // TODO: Randomly pick r/p/s for the computer

    // TODO: Compare user and computer picks and announce winnner

    // TODO: Track and display scoreline
  }
}

int main(void)
{
  gameLoop();
  return 0;
}
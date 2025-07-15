#include <stdio.h>
#include <stdbool.h>

bool gameLoop()
{
  printf("Welcome, please choose between Rock, Paper, or Scissors.\n If you would like to exit the game, type exit.");

  // TODO: Check for exit and exit if necessary

  // TODO: Recieve and store user input
  
  // TODO: Randomly pick r/p/s for the computer 
  
  // TODO: Compare user and computer picks and announce winnner

  // TODO: Track and display scoreline
}

int main(void)
{
  bool runGameLoop = true;
  while (runGameLoop)
  {
    bool runGameLoop = gameLoop();
  }

  return 0;
}
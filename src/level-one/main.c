#include <stdio.h> // printf, scanf
#include <stdbool.h>  // true, false
#include <string.h> // strcmp
#include <time.h> // time
#include <stdlib.h> // srand, rasnnd
#include <ctype.h> // tolower

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
    char userInput[MAX_BUFFER_SIZE];
    printf("Please choose between Rock, Paper, or Scissors.\nIf you would like to exit the game, type exit.\n");
    scanf("%s", userInput);

    for (int i = 0; userInput[i]; i++)
    {
      userInput[i] = tolower(userInput[i]);
    }

    if (strcmp(userInput, "exit") == 0)
    {
      break;
    }
    int usersChoice;
    if (strcmp(userInput, "rock") == 0)
    {
      usersChoice = ROCK;
    }
    else if (strcmp(userInput, "paper") == 0)
    {
      usersChoice = PAPER;
    }
    else if (strcmp(userInput, "scissors") == 0)
    {
      usersChoice = SCISSORS;
    }
    else
    {
      printf("Input Invalid. Try again.\n");
      continue;
    }

    int computersChoice = rand() % CHOICE_COUNT;

    if (usersChoice == computersChoice)
    {
      printf("A Tie!\n");
    }
    else if (usersChoice == ROCK && computersChoice == PAPER)
    {
      printf("You Lost!\n");
      computerWins++;
    }
    else if (usersChoice == PAPER && computersChoice == SCISSORS)
    {
      printf("You Lost!\n");
      computerWins++;
    }
    else if (usersChoice == SCISSORS && computersChoice == ROCK)
    {
      printf("You Lost!\n");
      computerWins++;
    }
    else
    {
      printf("You Won!\n");
      playerWins++;
    }
    printf("You have %d wins and the computer has %d wins.\n\n", playerWins, computerWins);
  }
}

int main(void)
{
  srand(time(NULL));
  gameLoop();
  return 0;
}
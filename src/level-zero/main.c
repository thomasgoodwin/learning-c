/* Write out in comments what the following code will print to the terminal.*/
#include <stdio.h>   // printf
#include <stdbool.h> // true, false
#include <string.h>  // strcmp
#include <stdlib.h>  // atoi
#include <ctype.h>   // tolower
#define MAX_BUFFER_SIZE 512

enum Location // for Problem 2
{
    TOP,
    RIGHT,
    BOTTOM,
    LEFT
};

// Problem 0
void problemZero(void)
{
    int buffer[MAX_BUFFER_SIZE];
    printf("Enter your age:\n");
    scanf("%d", buffer);
    printf("In ten years, you will be %d years old.\n", *buffer + 10);
}
// Answer: (give me your best explanation)

// Problem 1
void problemOne(void)
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }
}
// Answer:

// Problem 2
void problemTwo(void)
{
    int initialLocation = TOP;
    printf("Initial location: %d, Transformed location: %d\n", initialLocation, initialLocation + 1 * 2);
}
// Answer:

// Problem 3
void problemThree(void)
{
    char name[MAX_BUFFER_SIZE];
    strcpy(name, "Mr. Mike Mentzer");

    for (int i = 0; name[i] != '\0'; i++)
    {
        name[i] = tolower(name[i]);
    }
    printf("%s\n", name);
}
// Answer:

// Problem 4
void problemFour(void)
{
    int i = 0;
    bool exitEarly = false;
    while (!exitEarly)
    {
        printf("i\n");
        i++;
        if (i > 3)
        {
            exitEarly = true;
        }
    }
}
// Answer:

// Problem 5
void problemFive(void)
{
    char requestedClass[] = "CHEM101";
    char availableClass[] = "BIO141";
    int result = strcmp(requestedClass, availableClass);
    if (result == 0)
    {
        printf("Result 1\n");
    }
    if (strcmp(requestedClass, availableClass) == 0)
    {
        printf("Result 2\n");
    }
    if (strcmp(requestedClass, "CHEM101") == 0)
    {
        printf("Result 3\n");
    }
}
// Answer:

// Problem 6
void problemSix(void)
{
    char c = 'A';
    printf("ASCII value of %c is %d\n", c, c);
}
// Answer:

// Problem 7
void problemSeven(void)
{
    int n = 7;
    if (n % 2 == 0)
    {
        printf("%d is even\n", n);
    }
    else
    {
        printf("%d is odd\n", n);
    }
}
// Answer:

// Problem 8
void problemEight(void)
{
    int a = 5, b = 9, c = 3;
    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    printf("Largest: %d\n", max);
}
// Answer:

// Problem 9
void problemNine(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("Sum of array: %d\n", sum);
}
// Answer:

// Problem 10
void problemTen(void)
{
    int a = 5, b = 10;
    printf("Before swap: a=%d, b=%d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("After swap: a=%d, b=%d\n", a, b);
}
// Answer:

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s <problem_number>\n", argv[0]);
        return 1;
    }

    int choice = atoi(argv[1]);

    switch (choice)
    {
    case 0:
        problemZero();
        break;
    case 1:
        problemOne();
        break;
    case 2:
        problemTwo();
        break;
    case 3:
        problemThree();
        break;
    case 4:
        problemFour();
        break;
    case 5:
        problemFive();
        break;
    case 6:
        problemSix();
        break;
    case 7:
        problemSeven();
        break;
    case 8:
        problemEight();
        break;
    case 9:
        problemNine();
        break;
    case 10:
        problemTen();
        break;
    default:
        printf("Invalid problem number: %d\n", choice);
        break;
    }
}
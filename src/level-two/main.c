#include <stdio.h>   // printf
#include <stdlib.h>  // atoi
#include <stdbool.h> // true, false

void problemZero()
{
    int i = 10;
    int *p = &i; /* operator * is used as a declaration here */
    int j;

    printf("The value of i is %i\n", i);
    printf("The address of i is %p\n", (void *)&i);

    printf("The value of p is %p\n", (void *)p);
    printf("The address of p is %p\n", (void *)&p);
    printf("The value of what p is pointing at is %i\n", *p); /* operator * is dereferencing the pointer p */

    j = *p;  /* j has the value of i   */
    *p = 20; /* i has the value 20     */

    printf("The value of j is %i\n", j);
    printf("The value of i is %i\n", i);

    //j = p;  /* ILLEGAL: different types (compiler won't implicitly convert) */
    //p = 20; /* ILLEGAL: different type (compiler won't implicitly convert)  */
    //int* myPointer = 100; /* LEGAL, but will point to the address 100 in your machine */
}

void problemOne()
{
    int i = 10; /* i gets value 10 */
    int *p;     /* undefined       */
    int *q;     /* undefined       */

    p = &i; /* p gets address of i              */
    q = p;  /* q gets value of p (address of i) */

    printf("The value of p is %i\n", *p);
    printf("The value of q is %i\n", *q);
}

// Why bother with pointers?
void buyStocks(int stockCount, int stocksToBuy, int availableStocks)
{
    stockCount += stocksToBuy;
    availableStocks -= stocksToBuy;
}

void buyStocksWithPointers(int *stockCount, int stocksToBuy, int *availableStocks)
{
    *stockCount += stocksToBuy;
    *availableStocks -= stocksToBuy;
}

void problemTwo()
{
    int stockCount = 0;
    int purchaseQuantity = 2; // notice variable name is different
    int availableStocks = 10;

    buyStocks(stockCount, purchaseQuantity, availableStocks);

    printf("Stock count: %d, Purchase Quantity: %d, Available Stocks: %d\n", stockCount, purchaseQuantity, availableStocks);
    /*
    int stockCount = 0;
    int availableStocks = 10;

    int *stockCountPtr = &stockCount;
    int purchaseQuantityPtr = 2;
    int *availableStocksPtr = &availableStocks;
    buyStocksWithPointers(stockCountPtr, purchaseQuantityPtr, availableStocksPtr);
    printf("Stock count: %d, Purchase Quantity: %d, Available Stocks: %d\n", *stockCountPtr, purchaseQuantityPtr, *availableStocksPtr);
    */
}

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

    default:
        printf("Invalid problem number: %d\n", choice);
        break;
    }
}
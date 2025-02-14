#include <iostream>
#include <vector>
using namespace std;

/*
* @brief prints the elements 
*
 @param arrayA - array of intergers
 * @param sizeA - ther numbero f elements oin the array
 */

void printMemArr(const int * arrayA, int sizeA) 
{// void printMemArr(int arrayA[], int sizeA)
printf ("Array - Each int is worth %lu bytes\n", sizeof(arrayA[0]));
for(int i = 0; i < sizeA; i++)
{
    printf("Value: %i at Memory location: %p\n", arrayA[i], arrayA+i);
}
}

void incArrBy10(int * arrayA, int sizeA) // void incArrBy10(int arrayA[], int sizeA)
{
    for(int i = 0; i < sizeA; i++)
    {arrayA[i] = arrayA[i] + 10;}
}

int main ()
{
    const int sizeA = 5;
    int arrayA[sizeA];

        for(int i = 0; i < sizeA; i++)
            {
                arrayA[i] = 100 + i;
            }
    printf ("Before---------\n");
    printMemArr(arrayA, sizeA);
    incArrBy10(arrayA, sizeA);
    printf("After---------\n");
    printMemArr(arrayA, sizeA);
    int a = &arrayA[4] - &arrayA[0];
cout << a;
    return 0;
}


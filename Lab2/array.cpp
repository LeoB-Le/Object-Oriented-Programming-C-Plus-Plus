#include <iostream>
#include <vector>
using namespace std;

/*
* @brief prints the elements 
*
 @param arr - array of intergers
 * @param size - ther numbero f elements oin the array
 */

 void printMemArr(const int * arr, int size) 
{// void printMemArr(int arr[], int size)
printf ("Array - Each int is worth %lu bytes\n", sizeof(arr[0]));
for(int i = 0; i < size; i++)
{
    printf("Value: %i at Memory location: %p\n", arr[i], arr+i);
}
}

void incArrBy10(int * arr, int size) // void incArrBy10(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {arr[i] += 10;}
}
int main ()
{
    const int SIZE = 5;
    int arr[SIZE];
    for(int i = 0; i < SIZE; i++)
    {arr[i] = 100 + i;}
    printf ("Before---------\n");
    printMemArr(arr, SIZE);
    incArrBy10(arr, SIZE);
    printf("After---------\n");
    printMemArr(arr, SIZE);
    return 0;
}


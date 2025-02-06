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
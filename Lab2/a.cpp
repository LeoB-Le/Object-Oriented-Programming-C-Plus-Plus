#include <iostream>
#include <string>
using namespace std;

void printMem(int * arr, int size) { // void printMem(int arr[], int size )
    printf("Each int is worth %lu bytes\n", sizeof(arr[0]));
    for(int i = 0; i < size; i++) {
        printf("Value :%i at Memory Location: %p\n", arr[i], arr + i);
    }
}

void changeData(int array1[])
{
        array1[4] = 500;
}


int main()
{
    const int sizeA = 5;
    int arrayA [sizeA] = {1,2,3,4,5};
    int a = 0;
    printMem(arrayA, sizeA);
    changeData(arrayA);
    printMem(arrayA, sizeA);

    a = &arrayA[1] - &arrayA[0];
    cout << a;
    return 0;
}
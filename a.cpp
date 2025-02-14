#include <iostream>
#include <string>
#include <vector>
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

    
    const int sizeB = 5;
    vector <int> vectorA(sizeB);// = {1,2,3,4,5};
    for (int i = 0; i < sizeB; i++)
    {
        vectorA[i] = i + 1;
    }
    cout << "Before: ";

    for(int i = 0; i <= 4; i++)
        {
            cout << endl << vectorA[i] ;
        }

    
    for(int i = 1; i <= 2; i++)
    
    {
        vectorA.push_back(5+i);
    }
    cout << endl << "After: ";

    for(int i = 0; i < vectorA.size(); i++)
        {
            cout<< endl << vectorA[i] ;
        }

    cout << endl << "There are " << vectorA.size() << " elements in the vector";
    
    vectorA.pop_back();
    
    cout << endl << "After pop_back there are " << vectorA.size() << " elements in the vector";

    cout << endl << "After: ";

   for(int i = 0; i < vectorA.size(); i++)
        {
            cout << endl << vectorA[i];
        }

    

    return 0;

    
}
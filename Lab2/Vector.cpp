#include <iostream>
#include <cstdlib>
#include <vector> 
using namespace std;

void printMemArr(const int * vectorA, int sizeA) 
{
printf ("Array - Each int is worth %lu bytes\n", sizeof(vectorA[0]));
for(int i = 0; i < sizeA; i++)
{
    printf("Value: %i at Memory location: %p\n", vectorA[i], vectorA+i);
}
}

void incBy10(int * vectorA, int sizeA)
{
    for(int i = 0; i < sizeA; i++)
    {vectorA[i] += 10;}
}

int main ()
{
    const int sizeA = 5;
    vector <int> vectorA;
    for(int i = 0; i < sizeA; i++)
    {
        vectorA.push_back(100 + i);
    }

    for(int i = 0; i < sizeA; i++)
    {
        cout << vectorA[i] << endl;
    }
    /*printf ("Before Increment---------\n");
    printMemArr(vectorA, sizeA);
    incBy10(vectorA, sizeA);
    printf("After Increment---------\n");
    printMemArr(vectorA, sizeA);
    vectorA.pop_back();*/
}
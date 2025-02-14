#include <iostream>
#include <cstdlib>
#include <vector> 
using namespace std;

void printMemVec(vector<int> &vector1, int sizeA) 
{
printf ("Vector - Each int is worth %lu bytes\n", sizeof(vector1[0]));
for(int i = 0; i < sizeA; i++)
{
    printf("Value: %i at Memory location: %p\n", vector1[i], vector1[1] + i);
}
}

void incBy10(vector <int> & vector2, int sizeA)
{
    for(int i = 0; i < 5; i++)
    {
        vector2[i] = vector2[i] + 10;
    }
}

int main ()
{
    const int sizeA = 5;
    vector <int> vectorA;
    for(int i = 0; i < sizeA; i++) // populates vector
    {
        vectorA.push_back(100 + i);
    }

     /*for(int i = 0; i < sizeA; i++)
    {
        cout << vectorA[i] << endl;
    }*/
    printf ("Before Increment---------\n");
    printMemVec(vectorA, vectorA.size());
    incBy10(vectorA, vectorA.size());
    printf("After Increment---------\n");
    printMemVec(vectorA, vectorA.size());
    vectorA.pop_back();
    cout << "After pop back:" << endl;
    printMemVec(vectorA, vectorA.size());

    for(int i = 0; i < 2; i++) // populates vector
    {
        vectorA.push_back(101 + i);
    }
    cout << "After appending 101 and 102 the vector is: \n";
    printMemVec(vectorA, vectorA.size());

}
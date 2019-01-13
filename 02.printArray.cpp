#include <iostream>
using namespace std;

void fun_printArray(int l[],int size);

void printArray()
{
     int numbers[5] = {1,3,5,8,0};
     fun_printArray(numbers,5);
}



void fun_printArray(int list[],int arraySize)
{
    for(int i=0; i<arraySize;i++)
    {
        cout << list[i] << " ";
    }
}


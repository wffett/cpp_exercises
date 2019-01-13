//password Generator from SoloLearn

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void password()
{
    static const char al[]="0123456789"
            "!@#$%^&*"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";
    int size = sizeof(al)-1;

    int length= 8;
    srand(time(0));
    for(int i = 0; i<length;i++)
    {
        cout<<al[rand()%size];
    }
}

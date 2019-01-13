#include <iostream>
using namespace std;

void prime_number()
{
    int a[100] , i=0;
    int m,n;
    for(m=1;m<100;m++)
    {
        for(n=2;n<m;n++)
        {
            if(m%n==0) break;
        }
        if(n==m)
        {
            a[i]=m;
            i++;
        }
    }

    for(int j=0;j<i;j++)
        cout <<a[j]<<"\t";
}

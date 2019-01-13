#include <iostream>

using namespace std;

//√∞≈›≈≈–Ú∑®
void Bubble_Sort()
{
    int array[11]= {74,32,55,2,8,39,43,89,22,29,66};
    cout << sizeof(array)/sizeof (array[0]) << endl;
    int i,j,temp;

    for(j=1;j<=10;j++)
    {    for(i=0;i<=10-j;i++)
         {  if(array[i]<array[i+1])
            {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] =temp;
            }
         }
     }

    cout << "the sorted numbers: " << endl;
    for(i=0;i<11;i++)
        cout << array[i] << " ";
    cout << endl;

}

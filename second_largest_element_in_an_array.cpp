#include<iostream>
using namespace std;
int main ()
{
    int n, i = 0, largest1 = 0, largest2 = 0, temp = 0;
 
    cout<<"Enter the size of the array\n";
    cin>>n;
    int array[n];
    cout<<"Enter the elements\n";
    for (i = 0; i < n; i++)
    {
        cin>>array[i];
    }
 
    cout<<"The array elements are :";
    for (i = 0; i < n; i++)
    {
       cout<<array[i]<<" ";
    }
cout<<"\n";
 
    largest1 = array[0];
    largest2 = array[1];
 
    if (largest1 < largest2)
    {
        temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }
 
    for (int i = 2; i < n; i++)
    {
        if (array[i] > largest1)
        {
            largest2 = largest1;
            largest1 = array[i];
        }
        else if (array[i] > largest2 && array[i] != largest1)
        {
            largest2 = array[i];
        }
    }
 
    cout<<"THE SECOND LARGEST = "<<largest2;
 
    return 0;
}
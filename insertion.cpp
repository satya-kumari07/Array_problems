#include <iostream>
using namespace std;
int main()
{
  int n;
  int *arr;
  cout << "Enter the size of an array : ";
  cin >> n;
  arr = new int[n];
  cout << "\nEnter the elements of array : " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Array -> ";
  for (int i = 0; i < n; i++)
  {

    cout << arr[i] << " ";
  }
  return 0;
}
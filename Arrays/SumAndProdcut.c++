#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {1,2,3,4,5};
  int size = sizeof(arr)/sizeof(arr[0]);

  int sum = 0;
  int product = 1;
  for(int i=0;i<size;i++){
    sum += arr[i];
    product *= arr[i];
  }

  cout<<"The sum and product of the given array is "<<sum<<" and "<<product;

  return 0;
}
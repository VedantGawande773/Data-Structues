#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int* arr = new int[5]{22,6,88,62,44};
  int min = INT_MAX;
  int max = INT_MIN;

  for(int i=0;i<5;i++){
     if(arr[i] > max) max = arr[i];
     if(arr[i] < min) min = arr[i];
  }

  cout << "The max and min in the given array is: "<<max<<" and "<<min;
  delete[] arr;
  return 0;
}
#include <iostream>
using namespace std;

int main()
{
  int *arr = new int[5]{21,65,5,8,3};
  int i=0,j=4;
  while(i<j){
   int temp = arr[i];
   arr[i] = arr[j];
   arr[j] = temp;
   i++;
   j--;
  }

  cout<<"The reversed elements of the array are: ";
  for(int i=0;i<5;i++){
   cout<<arr[i]<<" ";
  }

  delete[] arr;

  return 0;
}
#include <iostream>
using namespace std;

void reverse(int arr[],int start,int end)
{
   while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
   }
}

void RotateArrayRight(int arr[],int n,int k){
   
        //Reverse starting elements
        //It becomes 3 2 1 4 5
        reverse(arr,0,n-k-1);

        //Reverse ending elements
        //It becomes 3 2 1 5 4
        reverse(arr,n-k,n-1);

        //Reverse whole array
        //It becomes 4 5 1 2 3
        reverse(arr,0,n-1);
}

void RotateArrayLeft(int arr[],int n,int k){

        //Revrese first elements
        reverse(arr,0,k-1);

        //Reverse ending elements
        reverse(arr,k,n-1);

        //Reverse whole array
        reverse(arr,0,n-1);
}

int main()
{
   int* arr = new int [5]{1,2,3,4,5};
   int k = 2;
   int n = 5;
//    1 2 3 4 5 

   RotateArrayRight(arr,n,k);
   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
   }
   cout<<endl;

   RotateArrayLeft(arr,n,k);
   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
   }

   delete[] arr;
        
  return 0;
}
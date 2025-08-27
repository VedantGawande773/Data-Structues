#include <iostream>
using namespace std;

bool isSorted(int arr[], int s){
    for(int i = 0; i < s - 1; i++) {  
        if(arr[i+1] < arr[i])
            return false;
    }
    //by doing else return true; code will be  check only stating elements
    return true; 
}

int main()
{
   int *arr1 = new int[5]{1,2,5,7,9};
   int *arr2 = new int[5]{9,2,6,7,0};
   int size = 5;

   bool ans1 = isSorted(arr1,size);
   bool ans2 = isSorted(arr2,size);
  
   if(ans1) cout<<"Sorted Array 1";
   else cout<<"Unsorted Array 1"; 
   cout<<endl;
   if(ans2) cout<<"Sorted Array 2";
   else cout<<"Unsorted Array 2"; 

   delete[] arr1;
   delete[] arr2;
  return 0;
}
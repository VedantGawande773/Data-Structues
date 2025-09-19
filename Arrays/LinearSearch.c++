#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int index = -1;
    
    for(int i=0;i<a.size();i++ ){
        if(a[i] == target)
          index = i;
    }

    cout << "The target i at index: "
                  << index << endl;
    return 0;
}
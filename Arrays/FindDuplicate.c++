#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//  Sorting with Consecutive Comparison - O(n × log n) Time and O(1) Space
/*
vector<int> findDuplicates(vector<int>& arr) {
    
    // sort the array so that duplicates are adjacent
    sort(arr.begin(), arr.end());

    vector<int> ans;

    // traverse the sorted array and check 
    // for consecutive duplicates
    for(int i = 1; i < arr.size(); i++){
        
        // tf current element is same as previous
        if(arr[i] == arr[i - 1]){

            // aoid adding the same duplicate multiple times
            if(ans.empty() || ans.back() != arr[i]){
                ans.push_back(arr[i]);
            }
        }
    }

    return ans;
}
*/

//Using Frequency Array - O(n) Time and O(n) Space
vector<int> findDuplicates(vector<int>& arr) {
    
    int n = arr.size();
    // frequency array of size n+1 (1-based indexing)
    vector<int> freq(n + 1, 0);  
    vector<int> ans;

    // Ccount frequencies using the array
    for (int num : arr) {
        freq[num]++;
    }

    // collect elements that appear exactly twice
    for (int i = 1; i <= n; i++) {
        if (freq[i] == 2) {
            ans.push_back(i);
        }
    }

    return ans;
}


int main() {

    vector<int> arr = {2, 3, 1, 2, 3};

    vector<int> res = findDuplicates(arr);

    for(int ele : res){
        cout << ele << ' ';
    }
    cout << endl;

    return 0;
}
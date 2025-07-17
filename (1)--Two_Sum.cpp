#include <bits/stdc++.h>
using namespace std;

vector <int> twoSum(vector <int>& arr, int target){
    map <int, int> mpp;
    int a = arr.size();
    for(int i = 0 ; i < a; i++){
        int idx = arr[i];
        int toFind = target - idx;
        if(mpp.find(toFind) != mpp.end()){
            return {mpp[toFind], i};
        }
        mpp[idx] = i;
    }
    return {-1, -1};
}

int main() {
    int a, target;
    cin >> a;
    cin >> target;
    vector <int> arr;
    for(int i = 0; i < a; i++){
        int val;
        cin >> val;
        arr.push_back(val);
    }
    
    vector <int> res = twoSum(arr, target);
    
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }

    return 0;
}
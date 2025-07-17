#include <bits/stdc++.h>
using namespace std;

vector <int> findAllDisappearNumber(vector <int>& arr){
    int a = arr.size();
    vector <int> res;
    unordered_map <int, int> mpp;
    for(int i  = 0; i < a; i++){
        mpp[arr[i]]++;
    }
    for(int i = 1 ; i <= a; i++){
        if(mpp.find(i) == mpp.end()){
            res.push_back(i);
        }
    }
    return res;
}

int main() {
    int a;
    cin >> a;
    vector <int> arr;
    for(int i = 0; i < a; i++){
        int val;
        cin >> val;
        arr.push_back(val);
    }
    
    vector <int> res = findAllDisappearNumber(arr);
    
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// This is a brute force solution with O(n^2) time complexity.
 vector<int> smallerNumbersThanCurrent(vector<int>& arr) {
        int a = arr.size();
        vector <int> res;
        int count = 0;

        for(int i = 0; i < a; i++){
            for(int j = 0; j < a; j++){
                if(i != j && arr[j] < arr[i]){
                    count++;
                }
            }
            res.push_back(count);
            count = 0;
        }
        return res;
    }

// This is an optimized solution with O(n log n) time complexity.
vector<int> smallerNumbersThanCurrent(vector<int>& arr) {
        int a = arr.size();
        vector<int> copied(arr);
        unordered_map<int, int> mpp;
        sort(copied.begin(), copied.end());
        for (int i = 0; i < copied.size(); i++) {
            if (mpp.find(copied[i]) == mpp.end()) {
                mpp[copied[i]] =i;
            }
        }

        vector<int> res;
        for (int i = 0; i < a; i++) {
            res.push_back(mpp[arr[i]]);
        }
        return res;
    }
    
int main() {
    int a, target;
    cin >> a;
    vector <int> arr;
    for(int i = 0; i < a; i++){
        int val;
        cin >> val;
        arr.push_back(val);
    }
    
    vector <int> res = smallerNumbersThanCurrent(arr);
    
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }

    return 0;   
}
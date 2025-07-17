#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        int m = arr.size(); 
        int n = arr[0].size();
        int left = 0, right = n - 1;
        int top = 0, bottom = m - 1;
        vector<int> res;

        while (top <= bottom && left <= right) {

            for (int i = left; i <= right; i++) {
                res.push_back(arr[top][i]);
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                res.push_back(arr[i][right]);
            }
            right--;
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    res.push_back(arr[bottom][i]);
                }
                bottom--;
            }
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    res.push_back(arr[i][left]);
                }
                left++;
            }
        }
        return res;
    }
};
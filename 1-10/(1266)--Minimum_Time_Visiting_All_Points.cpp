#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& arr) {
        int count = 0;
        for (int i = 1; i < arr.size(); i++) {
            count += max(abs(arr[i][0] - arr[i - 1][0]),
                         abs(arr[i][1] - arr[i - 1][1]));
        }
        return count;
    }
};

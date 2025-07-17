#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	int a = nums.size();
	int store = 0;
	bool found = false;
	for(int i = 0 ; i < a; i++) {
		if(i != nums[i]) {
			store = i;
			found = true;
			break;
		}
	}
	return found ? store : a;
}

int missingNumber(vector<int>& arr) {
	int a = arr.size();
	int total = a * (a + 1) / 2;
	int sum = 0;
	for(int n : arr) {
		sum += n;
	}
	return total - sum;
}

int main() {
	int a;
	cin >> a;
	vector<int> arr;
	for(int i = 0 ; i< a; i++) {
		int val;
		cin >> val;
		arr.push_back(val);
	}
    
	int ans = missingNumber(arr);
	cout << ans;


	return 0;
}
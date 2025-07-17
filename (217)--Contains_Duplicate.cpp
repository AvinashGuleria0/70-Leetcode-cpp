#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& arr) {
	unordered_map <int, int> mpp;
	int a = arr.size();
	for(int i = 0 ; i < a; i++) {
		mpp[arr[i]]++;
	}
	for(auto i = mpp.begin(); i != mpp.end(); i++) {
		if(i -> second >= 2) {
			return true;
		}
	}
	return false;
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
    
	bool found = containsDuplicate(arr);
    cout << (found ? "True" : "False");
    
    
	return 0;
}
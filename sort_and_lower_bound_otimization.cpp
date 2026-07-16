#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;


int main() {
    int n, x, target;
    vector<int> arr;
    cin >> n;
    
    for(int i = 0; i < n; i = i + 1) {
        cin >> x; arr.push_back(x);
    }
    
    int querys;
    cin >> querys;
    
    for(int i = 0; i < querys; i = i + 1) {
        cin >> target;
        
        auto it = lower_bound(arr.begin(), arr.end(), target);
        int index = distance(arr.begin(), it) + 1;
        
        if(it != arr.end() && *it == target) {
            cout << "Yes " << index << "\n";
        } else {
            cout << "No " << index << "\n";
        } 
    }
    
    return 0;
}

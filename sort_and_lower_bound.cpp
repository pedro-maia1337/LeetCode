#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;


int main() {
    int n, x, querys, target;
    vector<int> arr;
    cin >> n;
    
    //insert element in array
    for(int i = 0; i < n; i = i + 1) {
        cin >> x;
        arr.push_back(x);
    } 
    
    cin >> querys;
    
    for(int i = 0; i < querys; i = i + 1) {
        cin >> target;
        
        //iterator 
        auto result = find(begin(arr), end(arr), target);
        
        // test find or not
        if(result != end(arr)) {
            int index = distance(arr.begin(), result);
            cout << "Yes " << index + 1 << endl;
        } else {
            //find the smallest number just greater than that number 
            auto it = lower_bound(arr.begin(), arr.end(), target);
            int index = distance(arr.begin(), it);
            cout << "No " << index + 1 << endl;
        } 
    }
    
    return 0;
}

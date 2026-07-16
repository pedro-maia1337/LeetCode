#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, op, x;
    cin >> n;
    
    set<int> s;
    
    for(int i = 0; i < n; i = i + 1) {
        cin >> op; cin >> x;
        
        if(op == 1) s.insert(x);
        if(op == 2) s.erase(x);
        if(op == 3) {
            set<int>::iterator itr = s.find(x);
            if(itr != s.end()) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }      
    }
    
    return 0;
}

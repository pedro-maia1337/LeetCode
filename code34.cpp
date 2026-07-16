#include <algorithm>
#include <vector>
#include <cstdio>
#include <iterator>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.empty()) return {-1 , -1};

        auto low = lower_bound(nums.begin(), nums.end(), target); //O(n log)

        if (low == nums.end() || *low != target) {
            return {-1, -1};
        }

        auto high = upper_bound(nums.begin(), nums.end(), target);  //O(n log)

        int first = distance(nums.begin(), low);
        int last = distance(nums.begin(), high) - 1;

        return {first, last};
    }
};
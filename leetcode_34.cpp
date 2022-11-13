#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> ans;
        int index = -1;
        int n = nums.size();
        int i = 0;
        if (nums.size() == 1) {
            if (nums[0] == target) {
                ans.push_back(0);
                ans.push_back(0);
                return ans;
            }
            else {
                ans.push_back(-1);
                ans.push_back(-1);
                return ans;
            }
        }
        while (i <= n) {
            int mid = (n - i) / 2;
            if (nums[mid] == target) {
                index = mid;
                break;
            }
            else if (target < nums[mid]) {
                n = mid - 1;
            }
            else {
                i = mid + 1;
            }
        }
        if (index == -1) {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else {
            int t = index;
            while(nums[t] == target) {
                t--;
                if (t == -1) {
                    break;
                }
            }
            t++;
            while(nums[index] == target) {
                index++;
                if (index == nums.size()) {
                    break;
                }
            }
            index--;
            ans.push_back(t);
            ans.push_back(index);
        }
        return ans;
    }
};

int main() {
    vector <int> v = {1, 3};
    int target = 1;
    Solution s;
    vector <int> ans = s.searchRange(v, target);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
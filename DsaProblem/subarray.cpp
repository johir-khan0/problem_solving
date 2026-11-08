
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();

    int i = 0, j = n - 1;

    while (i < j) {
        int sum = nums[i] + nums[j];

        if (sum > target) {
            j--;
        } else if (sum < target) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;

    vector<int> ans = pairSum(nums, target);

    if (ans.size() == 2) {
        cout << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "Pair not found" << endl;
    }

    return 0;
}

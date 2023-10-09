#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findCombinations(vector<int>& candidates, vector<vector<int>>& ans, vector<int>& temp, int sum, int target, int index) {
    if (sum == target) {
        ans.push_back(temp);
        return;
    }

    if (sum > target || index == candidates.size()) {
        return;
    }

    // Include the current candidate
    temp.push_back(candidates[index]);
    findCombinations(candidates, ans, temp, sum + candidates[index], target, index);

    // Exclude the current candidate
    temp.pop_back();
    findCombinations(candidates, ans, temp, sum, target, index + 1);
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> temp;
    findCombinations(candidates, ans, temp, 0, target, 0);
    return ans;
}

int main() {
    vector<int> candidates = {2, 3, 5};
    int target = 8;
    vector<vector<int>> ans = combinationSum(candidates, target);

    for (vector<int> v : ans) {
        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}

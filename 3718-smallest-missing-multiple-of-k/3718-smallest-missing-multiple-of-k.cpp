class Solution {
public:
int missingMultiple(vector<int>& nums, int k) {
    int multiple = k;

    while (true) {
        bool found = false;

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == multiple) {
                found = true;
                break;
            }
        }

        if (!found) {
            return multiple;
        }

        multiple += k;
    }
}
};
    
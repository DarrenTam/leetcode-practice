//
// Created by darre on 2021/9/1.
//

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp(nums.size());
        int count = 0;
        for (int i = 0; i< nums.size(); i++ ){
            if (nums[i] != 0) {
                temp[count] = nums[i];
                count++;
            }
        }

        for (int i = 0; i< nums.size(); i++ ){
            nums[i] = temp[i];
        }
    }
};
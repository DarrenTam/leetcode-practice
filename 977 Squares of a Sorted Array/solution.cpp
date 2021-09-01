//
// Created by darre on 2021/9/1.
//

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;
        vector<int> result(nums.size());

        for (int i = nums.size()-1 ; 0<=i; i--){
            int count = 0;
            if (abs(nums[l])> abs(nums[r])){
                count = nums[l];
                l++;
            }else{
                count = nums[r];
                r--;
            }

            result[i] = count*count;
        }

        return result;
    }
};
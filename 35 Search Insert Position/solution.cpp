//
// Created by darre on 2021/9/1.
//
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        if (nums.size() == 1 ) {
            return nums[0]>=target?0:1;
        }

        int l = 0;
        int r = nums.size()-1;

        while(l<=r){
            int mid = l+(r-l)/2;

            if (nums[mid] == target){
                return mid;
            }

            if (nums[mid]> target){
                r = mid-1;
            }else{
                l =mid+1;
            }
        }

        return l;
    }
};
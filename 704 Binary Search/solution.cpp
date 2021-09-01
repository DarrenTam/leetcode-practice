//
// Created by darre on 2021/9/1.
//

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() -1 ;

        while (right >= left){
            int mid = (right+left)/2;

            if (nums[mid] == target){
                return mid;
            }

            if (nums[mid]>target){
                right = mid -1;
            }else{
                left = mid+1;
            }
        }

        return -1;
    }
};

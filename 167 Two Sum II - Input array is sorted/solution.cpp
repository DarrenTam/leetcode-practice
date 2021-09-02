//
// Created by darre on 2021/9/1.
//
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;
        vector<int> result(2);

        for (int k = 0; k< numbers.size(); k++) {
            int sum = numbers[i]+ numbers[j];
            if (sum == target && i!=j) {
                result[0] = i+1;
                result[1] = j+1;
            }

            if (sum > target) {
                j--;
            }else{
                i++;
            }
        }

        return result;
    }
};
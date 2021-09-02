//
// Created by darre on 2021/9/1.
//

class Solution {
public:
    void reverseString(vector<char> &s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};
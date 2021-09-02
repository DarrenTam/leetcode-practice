//
// Created by darre on 2021/9/1.
//

class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = 0 + 1;
        while (left < right) {

            if (right > s.size() - 1) {
                int start = left;
                resverseWord(s, start, s.size() - 1);
                break;
            }

            if (s[right] == ' ') {
                int start = left;
                int end = right - 1;
                resverseWord(s, start, end);
                left = right + 1;
                right += 2;
            } else {
                right++;
            };
        }

        return s;
    }

    void reverseWord(string &s, int start, int end) {
        while (start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
};
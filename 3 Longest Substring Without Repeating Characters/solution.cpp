//
// Created by darre on 2021/9/1.
//
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> m;
        int ans = 0;
        int head = 0;
        int tail = 0;
        while (tail < s.size()) {

            if (m.find(s[tail]) != m.end()) {
                head = max(m[s[tail]], head);
            }


            m[s[tail]] = tail + 1;
            ans = max(ans, m[s[tail]] + 1 - m[s[head]]);
            tail++;
        }
        return ans;
    }
};
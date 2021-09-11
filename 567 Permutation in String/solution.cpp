//
// Created by darre on 2021/9/11.
//

class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.size() > s2.size()) {
            return false;
        }

        vector<int> s1Array(26, 0), s2Array(26, 0);

        for (int i = 0; i < s1.size(); i++) {
            s2Array[s2[i] - 'a']++;
            s1Array[s1[i] - 'a']++;
        }


        if (s1Array == s2Array) {
            return true;
        }

        for (int i = 0; i < s2.size() - s1.size(); i++) {

            if (s1Array == s2Array) {
                return true;
            }

            s2Array[s2[i + s1.size()] - 'a']++;
            s2Array[s2[i] - 'a']--;

        }

        return s1Array == s2Array;
    }


};
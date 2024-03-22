class Solution {
public:
    bool isAnagram(string s, string t) {
        int size1 = s.length(), size2 = t.length();
        if (size1 != size2){
            return false;
        }

        int count [26] = {};
        for (int i = 0;i < size1; i++){
            count[s[i] - 97]++;
        }

        bool cont = true;
        for (int i = 0; cont && i <size1; i++){
            (--count[t[i] - 97] < 0) ? cont = false : 1;
            
        }
        if (cont){
            return true;
        }
        return false;
    }
};
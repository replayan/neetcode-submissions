class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            while (i < j && !(((s[i]|32)-97u<26u)|(s[i]-48u<10u))) ++i;
            while (i < j && !(((s[j]|32)-97u<26u)|(s[j]-48u<10u))) --j;
            if ((s[i++]|32)^(s[j--]|32)) return false;
        }
        return true;
    }
};
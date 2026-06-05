class Swapper {
public:
    void swapChars(char &a, char &b) {
        char temp = a;
        a = b;
        b = temp;
    }
};

class Solution {
public:
    void reverseString(vector<char>& s) {
        Swapper obj;

        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            obj.swapChars(s[left], s[right]);
            left++;
            right--;
        }
    }
};
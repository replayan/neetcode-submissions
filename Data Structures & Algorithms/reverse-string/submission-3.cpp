class CharPointer {
public:
    char* ptr;

    CharPointer(char* p) : ptr(p) {}
};

class Solution {
public:
    void reverseString(vector<char>& s) {
        CharPointer* left =
            new CharPointer(&s[0]);

        CharPointer* right =
            new CharPointer(&s[s.size()-1]);

        while (left->ptr < right->ptr) {
            char temp = *(left->ptr);

            *(left->ptr) = *(right->ptr);
            *(right->ptr) = temp;

            left->ptr++;
            right->ptr--;
        }

        delete left;
        delete right;
    }
};
#include <vector>
#include <thread>
using namespace std;

class Solution {
public:
    static void swapChars(char* a, char* b) {
        char temp = *a;
        *a = *b;
        *b = temp;
    }

    void reverseString(vector<char>& s) {
        vector<thread> workers;

        char* left = &s[0];
        char* right = &s[s.size() - 1];

        while (left < right) {
            workers.emplace_back(swapChars, left, right);

            left++;
            right--;
        }

        for (auto& t : workers) {
            t.join();
        }
    }
};
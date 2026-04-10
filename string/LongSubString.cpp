#include <iostream>
#include <unordered_set>
using namespace std;

int longestSubstring(string s) {
    unordered_set<char> set;
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.length(); right++) {
        while (set.count(s[right])) {
            set.erase(s[left]);
            left++;
        }
        set.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}

int main() {
    cout << longestSubstring("abcabcbb"); // 3
}
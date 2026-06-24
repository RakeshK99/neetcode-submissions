#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        // 1. Check length first
        if (s.length() != t.length()) return false;

        // 2. Rename maps so they don't clash with string s and t
        unordered_map<char, int> countS;
        unordered_map<char, int> countT;

        // 3. Use your logic (simplified)
        for(int i = 0; i < s.length(); i++){
            countS[s[i]]++;
            countT[t[i]]++;
        }

        // 4. Directly compare the maps
        return countS == countT;
    }
};
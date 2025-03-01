class Solution {
public:
    int strStr(string haystack, string needle) {
        int b = haystack.find(needle);
        if(b != string::npos) return b;
        else return -1;
    }
};

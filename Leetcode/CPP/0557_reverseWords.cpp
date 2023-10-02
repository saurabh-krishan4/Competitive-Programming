class Solution {
public:
    void reverse(string &s, int lo, int hi) {
        char ch;
        while(lo < hi) {
            ch = s[lo];
            s[lo++] = s[hi];
            s[hi--] = ch;
        }
    }
    string reverseWords(string s) {
        int n = s.size();
        int j;
        for(int i = 0; i < n; i++) {
            if(s[i] == ' ') {
                continue;
            }
            j = i;
            while(j < n && s[j] != ' ') {
                j++;
            }
            j--;
            reverse(s, i, j);
            i = j;
        }
        return s;
    }
};

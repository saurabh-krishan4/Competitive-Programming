class Solution {
public:
    bool winnerOfGame(string colors) {
        int n = colors.size();
        int aTriplet = 0, bTriplet = 0;
        int j, c;
        for(int i = 0; i < n; i++) {
            j = i;
            c = 0;
            while(j < n && colors[j] == colors[i]) {
                j++;
                c++;
            }
            i = j - 1;
            if(c < 3) {
                continue;
            }
            if(colors[i] == 'A') {
                aTriplet += c - 2;
            } else {
                bTriplet += c - 2;
            }
        }
        return (aTriplet > bTriplet);
    }
};

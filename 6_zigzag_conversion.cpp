class Solution {
public:
    string convert(string s, int numRows) {
        string arr[numRows];
        for (int i = 0; i < numRows; i++)
            arr[i] = "";
        bool down = true;
        int b = 0;
        if(numRows == 1) return s;
        for (int i = 0; i < s.length(); i++) {
            if(down){
                arr[b] += s[i];
                b++;
                if(b == numRows){
                    down = false;
                    b-= 2;
                }
            }else{
                arr[b] += s[i];
                b--;
                if(b == -1){
                    b+= 2;
                    down = true;
                }
            }
        }
        string ans = "";
        for (int i = 0; i < numRows; i++)
            ans += arr[i];
        return ans;
    }
};

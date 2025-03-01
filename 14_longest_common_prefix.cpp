class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minim = 201;
        for(int i=0; i<strs.size(); i++){
            int b = strs[i].length();
            minim = min(minim,b); 
        }
        string ans = "";
        bool stop = false;
        for(int i=0; i<minim; i++){
            char b = strs[0][i];
            for(int y=1; y<strs.size(); y++){
                if(strs[y][i]!=b) stop = true;
            }
            if(stop){
                break;
            }else{
                ans += b;
            }
        }
        return ans;
    }
};

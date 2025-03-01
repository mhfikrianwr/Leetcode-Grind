class Solution {
public:
    bool isValid(string s) {
        int b = s.length();
        vector <char> v;
        for(int i=0; i<b; i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                v.push_back(s[i]);
            }else{
                int b = v.size() - 1;
                if(s[i]=='}'){
                    if(b<0 || v[b]!='{'){
                        return false;
                    }else{
                        v.pop_back();
                    }
                }else if(s[i]==']'){
                    if(b<0 || v[b]!='['){
                        return false;
                    }else{
                        v.pop_back();
                    }
                }else{
                    if(b<0 || v[b]!='('){
                        return false;
                    }else{
                        v.pop_back();
                    }
                }
            }
        }
        if(v.size()==0)
        return true;
        else return false;
    }
};

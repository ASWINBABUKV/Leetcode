class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<char>v;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]!=' '){
                v.push_back(s[i]);
                if(i!=0 && s[i-1]==' '){
                    return v.size();
                }
                    
            }
            
        }
        return v.size();
    }
};
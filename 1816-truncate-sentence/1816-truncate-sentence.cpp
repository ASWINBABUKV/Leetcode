class Solution {
public:
    string truncateSentence(string s, int k) {
        string a="";
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                c++;
            }
            if(c==k){
                break;
            }
            a.push_back(s[i]);
        }
        return a;
        
    }
};
class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>m;
        char a='a';
        for(char c: key){
            if(c!=' ' && m.find(c)==m.end()){
                m.insert({c,a++});
            }
        }
        
        string ans="";
        for(char b: message){
            if(b!=' '){
                ans+=m[b];
            }
            else{
                ans+=' ';
            }
        }
        return ans;
        
    }
};
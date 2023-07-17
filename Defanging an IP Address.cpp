class Solution {
public:
    string defangIPaddr(string address) {
        string r="";
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                r=r+"[.]";
            }
            else{
                r=r+address[i];
            }
        }
        return r;
    }
};
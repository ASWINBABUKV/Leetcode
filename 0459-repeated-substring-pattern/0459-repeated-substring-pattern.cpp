class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string temp = s+s;
        temp = temp.substr(1,temp.length()-2); //remove first and last character
        int r= temp.find(s); //check whether the string is present in the temp
        if(r==-1)
            return false; //of not return false
        return true;
    }
};
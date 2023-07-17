class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int r=0;
        for (int i=0; i<operations.size();i++){
            if(operations[i]=="X++"||operations[i]=="++X"){
                r++;
            }
            else {
                r--;
            }
        }
        return r;
    }
};
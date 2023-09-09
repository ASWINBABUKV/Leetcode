class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        for(auto i: arr){
            m[i]++;
        }

        unordered_set<int> s;
        for(auto& [i,a]: m)
        {
            if(s.count(a)>0){
                return false;
            }
            s.insert(a);
        }
        return true;
        
        
    }
};
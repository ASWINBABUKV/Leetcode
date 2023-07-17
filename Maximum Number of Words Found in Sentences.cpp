class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int m=0;
        for(int i=0;i<sentences.size();i++){
            int l=0;
            string a = sentences[i];
            for(int j=0;j<a.length();j++){
                if(a[j]==' '){
                    l++;
                }
            }
            m=max(m,l);
        }
        return m+1;
        
    }
};
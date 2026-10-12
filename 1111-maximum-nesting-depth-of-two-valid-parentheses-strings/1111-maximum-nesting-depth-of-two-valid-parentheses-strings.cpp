class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int depth=0;
        stack<char>st;
        vector<int>v;
        for(int i=0;i<seq.length();i++){
            if(seq[i]=='('){
                depth++;
                v.push_back((depth-1)%2);
            }
            else{
                depth--;
                   v.push_back(depth%2);

            }
        }
        return v;
    }
};
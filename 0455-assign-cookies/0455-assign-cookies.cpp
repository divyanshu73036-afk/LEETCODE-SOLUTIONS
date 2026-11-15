class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();//no of children
        int m=s.size();//no of coikies
        int l=0;
        int r=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(l<m&&r<n){
            if(g[r]<=s[l])r++;
            l++;
        }
        return r;
    }
};
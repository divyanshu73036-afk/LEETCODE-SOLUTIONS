class Solution {
public:
//tc is 3n ans sc is 2n
    int trap(vector<int>& height) {
        int n=height.size();
        int trap=0;
        vector<int>prefixmax(n);
        prefixmax[0]=height[0];
        for(int  i=1;i<n;i++){
            prefixmax[i]+=max(prefixmax[i-1],height[i]);  
        }

         vector<int>suffixmax(n);
        suffixmax[n-1]=height[n-1];
        for(int  i=n-2;i>=0;i--){
            suffixmax[i]+=max(suffixmax[i+1],height[i]);  
        }

        for(int i=0;i<n;i++){
         //   if(height[i]<prefixmax[i]&&height[i]<suffixmax[i]){
                trap+=min(prefixmax[i],suffixmax[i])-height[i];
            //}
        }
        return trap;

    }
};
class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int n=nums.size();
        int noo=0;
        if (is_sorted(nums.begin(),nums.end()))return 0;

        while(!is_sorted(nums.begin(),nums.end())){
            int curr_mini=INT_MAX;
            
            int idx=-1;
            for(int i=0;i<(int)nums.size() - 1;i++){
             int  pair_sum=nums[i]+nums[i+1];
                if(curr_mini>pair_sum){
                    curr_mini=pair_sum;
                    idx=i;
                }
            }
            nums[idx] = nums[idx] + nums[idx + 1];
            nums.erase(nums.begin() + idx + 1);
            noo++;
        }
            return noo;
    }
};
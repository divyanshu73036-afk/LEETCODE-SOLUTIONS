class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int p = 0; int q = n-1;
        while(p<q){
         if(numbers[p]+numbers[q]==target){
          return {p+1,q+1};
         }   
         else if(numbers[p]+numbers[q]<target){
            p++;
         }
         else{
            q--;
         }
        }
        return {};
    }
};
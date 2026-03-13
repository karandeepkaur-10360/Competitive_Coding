class Solution {
public:
    int findSum(vector <int> &nums , int divisor){
        int result = 0;
        for(int i=0;i<nums.size();i++){
            result += ceil((double)nums[i] / divisor);
        }
        return result;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        int ans=high;
        while(low<=high){
            int mid = low +(high-low)/2;
            int sum = findSum(nums,mid);

        
        if(sum<=threshold){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }}
    return ans;   }
};
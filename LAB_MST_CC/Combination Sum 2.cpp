class Solution {
public:
    
    void solve(int index, vector<int>& candidates, int target,
               vector<int>& temp, vector<vector<int>>& ans) {
        
        if(target == 0){
            ans.push_back(temp);
            return;
        }

        for(int i = index; i < candidates.size(); i++){

            if(i > index && candidates[i] == candidates[i-1]) 
                continue;

            if(candidates[i] > target) 
                break;


    

        solve(0, candidates, target, temp, ans);

        return ans;
    }
};

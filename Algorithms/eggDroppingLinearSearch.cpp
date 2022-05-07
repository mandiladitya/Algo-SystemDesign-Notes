class Solution {
public:
int helper(int e, int f, vector<vector<int>> &t){
        //Base case
        if(f==0 || f==1) return f;
        if(e<=1) return f;
        
        if(t[e][f] != -1) return t[e][f];
        
        int res = INT_MAX, l = 1, h = f, temp = 0;
        
		//Binary search (Linear search will give TLE)
        for(int k=1;k<=f;k++){
            int left = helper(e-1,k-1,t);
            int right = helper(e,f-k,t);
            
            int temp = 1 + max(left, right);
            
            res = min(temp, res);
        }
        
        return t[e][f] = res;
    }
    
    int superEggDrop(int e, int f) {
        vector<vector<int>> t(e+1, vector<int>(f+1,-1));
        return helper(e,f, t);
    }

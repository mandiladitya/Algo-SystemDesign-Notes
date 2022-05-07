// Next Smaller Element & Prev Smaller Element Code same as above But
// 1. In Stack In place of Value s.push(arr[i]) Push Index s.push(i)
// 2. In While and If Conditions In place of s.top() Use arr[s.top()]
class Solution {
public:
    vector<int> NSE(vector<int> arr,int n){
        stack<int>s ;
        vector<int>v;
        for(int i=n-1;i>=0;i--){
            if (s.size()==0){
                v.push_back(-1);
            }
            if(s.size()>0 && arr[s.top()]<arr[i]){
                v.push_back(s.top());
            }
            if(s.size()>0 && arr[s.top()]>=arr[i]){
                while(s.size()>0 && arr[s.top()]>=arr[i]){
                    s.pop();
                }
                if(s.size()==0){
                    v.push_back(-1);
                }
                else{
                    v.push_back(s.top());
                }
            }
            s.push(i);
        }
        reverse(v.begin(),v.end());
        return v;
    }
    vector<int> PSE(vector<int> arr,int n){
        stack<int>s ;
        vector<int>v;
        for(int i=0;i<n;i++){
            if (s.size()==0){
                v.push_back(-1);
            }
            if(s.size()>0 && arr[s.top()]<arr[i]){
                v.push_back(s.top());
            }
            if(s.size()>0 && arr[s.top()]>=arr[i]){
                while(s.size()>0 && arr[s.top()]>=arr[i]){
                    s.pop();
                }
                if(s.size()==0){
                    v.push_back(-1);
                }
                else{
                    v.push_back(s.top());
                }
            }
            s.push(i);
        }
        return v;
    }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int area=INT_MIN;
        vector<int> next(n);
        next=NSE(heights,n);
        vector<int> prev(n);
        prev=PSE(heights,n);
        vector<int> width(n);
        for (int i=0;i<n;i++){
            if(next[i]==-1){
                next[i]=n;
            }
            width[i]=next[i]- prev[i] - 1;
        }
        for (int i=0;i<n;i++){
            int newarea=heights[i]*width[i];
            area=max(area,newarea);
        }

        return area;
    }
};

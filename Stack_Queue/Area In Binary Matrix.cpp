// Same Code as before Max Area in Histogram 
// 1. Just Looping to each row of 2D Matrix and M[i][j]=M[i][j] + M[i-1][j]
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
        vector<int> NSE(int* arr,int n){
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
    vector<int> PSE(int* arr,int n){
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
    int largestRectangleArea(int* heights,int n) {
        //int n=heights.size();
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
    int maximalRectangle(int matrix[1000][1000],int n,int m) {
        int area=largestRectangleArea(matrix[0],m);
        for (int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]!=0){
                    matrix[i][j]=matrix[i][j] + matrix[i-1][j];
                }
                else{
                    matrix[i][j]=0;
                }
            }
            area=max(area,largestRectangleArea(matrix[i],m));
        }
        return area;
    }
};
int main() {
    int T;
    cin >> T;

    int M[1000][1000];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maximalRectangle(M, n, m) << endl;
    }
}

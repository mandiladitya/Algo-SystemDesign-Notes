#include <iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main() {
int n;
cin>>n;
int a[n];
for (int i=0;i<n;i++)
    cin>>a[i];
stack<int>s;
vector<int>v;
// NGR
/*
for(int i=n-1;i>=0;i--){
    if(s.size()==0)
        v.push_back(-1);
    if(s.size()>0 && s.top()>=a[i])
        v.push_back(s.top());
    if(s.size()>0 && s.top()<=a[i]){
        while(s.size()>0 && s.top()<=a[i]){
            s.pop();
        }
        if(s.size()==0)
            v.push_back(-1);
        else{
            v.push_back(s.top());
        }
    }
    s.push(a[i]);
}*/
// NSR
/*
for(int i=n-1;i>=0;i--){
    if(s.size()==0)
        v.push_back(-1);
    if(s.size()>0 && s.top()<=a[i])
        v.push_back(s.top());
    if(s.size()>0 && s.top()>=a[i]){
        while(s.size()>0 && s.top()>=a[i]){
            s.pop();
        }
        if(s.size()==0)
            v.push_back(-1);
        else{
            v.push_back(s.top());
        }
    }
    s.push(a[i]);
}*/
// NGL
/*
for(int i=0;i<n;i++){
    if(s.size()==0)
        v.push_back(-1);
    if(s.size()>0 && s.top()>=a[i])
        v.push_back(s.top());
    if(s.size()>0 && s.top()<=a[i]){
        while(s.size()>0 && s.top()<=a[i]){
            s.pop();
        }
        if(s.size()==0)
            v.push_back(-1);
        else{
            v.push_back(s.top());
        }
    }
    s.push(a[i]);
}*/
// NSL
for(int i=0;i<n;i++){
    if(s.size()==0)
        v.push_back(-1);
    if(s.size()>0 && s.top()<=a[i])
        v.push_back(s.top());
    if(s.size()>0 && s.top()>=a[i]){
        while(s.size()>0 && s.top()>=a[i]){
            s.pop();
        }
        if(s.size()==0)
            v.push_back(-1);
        else{
            v.push_back(s.top());
        }
    }
    s.push(a[i]);
}
vector<int>::iterator it;
for(it=v.end()-1;it>=v.begin();it--)
    cout<<*it<<" ";
	return 0;
}

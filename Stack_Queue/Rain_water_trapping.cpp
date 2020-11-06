// Rain Water Trapping
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main() {
int n;
cin>>n;
int a[n],mxl[n],mxr[n];
int water =0;
for(int i=0;i<n;i++)
    cin>>a[i];
mxl[0]=a[0];
for(int i=1;i<n;i++)
    mxl[i]=max(mxl[i-1],a[i]);
mxr[n-1]=a[n-1];
for(int i=n-2;i>0;i--)
    mxr[i]=max(mxr[i+1],a[i]);
for(int i=0;i<n;i++)
    water+=min(mxl[i],mxr[i])-a[i];
cout<<water;
	return 0;
}

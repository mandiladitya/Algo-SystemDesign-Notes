#include<bits/stdc++.h>
using namespace std;
class NStack
{
public:
	int freespot;
	int *arr;int *next; int *top;
    NStack(int N, int S)
    {
        int n=N; //No. of Stack
		int s=S; //No of element
		top = new int[n];
		next= new int[s];
		arr= new int[s];
		for (int i=0;i<n;i++){
			top[i]=-1;
		}
		for (int i=0;i<s;i++){
			next[i]=i+1;
		}
		next[s-1]=-1;
		freespot=0;
    }

    bool push(int x, int m)
    {
  // Check Overflow
		if (freespot==-1)
			return false;
		int index=freespot;
		arr[index]=x;
		freespot=next[index];
		next[index]=top[m-1];
		top[m-1]=index;
		return true;
    }

    int pop(int m)
    {
        // Check Underflow
		if (top[m-1]==-1)
			return -1;
	    int index=top[m-1];
		top[m-1]=next[index];
		next[index]=freespot;
		freespot=index;
		return arr[index];
    }
};

int main()
{
    // Let us create 3 stacks in an array of size 10
    int k = 3, n = 10;
    NStack ks(k, n);
 
    
    ks.push(15, 2);
    ks.push(45, 2);
 
   
    ks.push(17, 1);
    ks.push(49, 1);
    ks.push(39, 1);
 
   
    ks.push(11, 0);
    ks.push(9, 0);
    ks.push(7, 0);
 
    cout << "Popped element from stack 2 is " << ks.pop(2) << endl;
     return 0;
}

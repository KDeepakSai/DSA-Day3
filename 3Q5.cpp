#include <bits/stdc++.h>
using namespace std;
int solve(int e,int f){
	int min_attempt= INT_MAX ;
	for(int k=1;k<=f;k++){
		int temp_ans= max(solve(e-1,k-1),solve(e,f-k))+1;
		min_attempt=min(min_attempt,temp_ans);
	}
	return min_attempt;
}
int main()
{
	int e,f;
	cout<<"Enter number of eggs and floors: \n";
	cin>>e>>f;
	cout<<"Minimum number of attempts are: ";
	solve(e,f);
	return 0;
}

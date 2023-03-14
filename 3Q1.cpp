#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char s, char t ,char a)
{
	if (n == 0) {
		return;
	}
	towerOfHanoi(n - 1, s, a, t);
	cout << "Move disk " << n << " from rod " << s<< " to rod " << t << endl;
	towerOfHanoi(n - 1, a, t, s);
}
int main()
{
	int n ;
	cout<<"Enter the number of disks: ";
	cin>>n;
	towerOfHanoi(n, 'A', 'C', 'B');
	return 0;
}




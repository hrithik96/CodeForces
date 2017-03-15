#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> f(m);
	for(int i=0;i<m;i++)
		cin>>f[i];
	sort(f.begin(),f.end());
	int min=1001;
	for(int i=0;i<m-n+1;i++)
		if(f[n+i-1]-f[i]<min)
			min=f[n+i-1]-f[i];
	cout<<min<<endl;
}
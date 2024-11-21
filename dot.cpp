#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1 = {1,2,3};
	vector<int> v2 = {4,5,6};
	vector<int> v3;
	for (int i=0;i<v1.size();i++)
	{
		v3[i] = v1[i]*v2[i];
	}
	// new change 

	cout<<"Successfully done"<<endl;

	// this is parallel and fast code
	return 0;
	cout<<"changs for stash"<<endl;
	
// new change included to git
}

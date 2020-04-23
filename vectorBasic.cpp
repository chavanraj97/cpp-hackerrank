#include<iostream>
#include <vector>
using namespace std;
void main()
{
	vector<int> a;//creating a vector
	a.push_back(15);//to insert elements into vector
	a.push_back(20);
	a.push_back(40);
	for(int i=0;i<3;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<a.size()<<endl;//to recognize the elements in the vector
	a.pop_back(); // to eliminate the last element of the vector
	/*for(int i=0;i<3;i++)
	{
		cout<<a[i]<<endl;
	}*/
	cout<<a.size()<<endl;
}
#include<iostream>
#include<map>
#include<functional>
#include<vector>
#include<string>
using namespace std;
int main()
{
	/*map<string , int ,std::greater<string> > M;// "creating a Map 'M'" SYNTAX-> map<dataType(key),dataType(value)> map_name;
	M["chotu"]=9090990;
	M["amit"]=98382;
	//M["amit"]=3243;       //cannot have multiple values for single key
	M.insert(make_pair("Raj",928393));
	*/
	map<string, vector<int>, std::less<string>> M;//using a vector instead of an integer to be albe to have multiple values on a single key
	M["chotu"].push_back(99832);
	M["amit"].push_back(839823);
	M["amit"].push_back(42343);  // having muliple values for a single key
	/*for(auto &that: M)   // works like foreach
	{
		cout<<that.first << " "<<that.second<<endl; //  to print all key value pairs that exist
	}*/
	for(auto &el1 :M)     //works like foreach
	{
		cout<< el1.first<<endl;
		for(auto &el2:el1.second) //2nd foreach used because of vector
		{
			cout<<el2<<" ";
		}
			
	}
	//cout<<M["amit"]<<endl;    //to print a single value of the map using key
	cout<<M["amit"][1] <<endl;  // having a single value of the map using key and printing the 1st element([1]) of the key "amit"
								// had it been M["amit"][0] the value would have been different
	return 0;
}
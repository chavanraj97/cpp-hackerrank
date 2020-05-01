#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
stringstream ss(str);   //??
vector<int> result;
char ch;
int tmp;
while(ss >> tmp) {      //cin >> a;  "23,4,56"
    result.push_back(tmp);// 23 
    ss >> ch;           //temporary character to store the commas
          }          
return result;
}
int main() 
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

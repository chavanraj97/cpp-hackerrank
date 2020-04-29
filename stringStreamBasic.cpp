#include <iostream>
using namespace std;
//#include<string>
#include<sstream>
int main()
{
    stringstream ss;
    int age=22,standard=10;
    string first_name="Raj",last_name="chavan";
    char c=',';

    ss << age << c << first_name << c << last_name << c << standard;

    cout<< ss.str()<<endl;
    return 0;
}
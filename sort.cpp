#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void sortString(string &str)
{
   sort(str.begin(), str.end());
   cout << str;
}
 

int main()
{
    cout<<"Enter the string to be sorted";
    string str;
    getline(cin ,str);
    string s = str;
    sortString(s);
    return 0;
}

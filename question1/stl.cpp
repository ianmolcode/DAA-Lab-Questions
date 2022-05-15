#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "anmol";
    m[2] = "narang";

    m.insert({4, "hello boss"});
    map<int, string>::iterator it;
    for (m.begin(); it != m.end(); it++)
        cout << (*it).first;
}
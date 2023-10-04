#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[3] = "Rajesh";
    m[7] = "Suraj";
    m[12] = "Akash";
    m.insert({19, "Akrosh"});

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "Finding 19 --> " << m.count(19) << endl;

    cout << endl;

    auto it = m.find(12);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }
}
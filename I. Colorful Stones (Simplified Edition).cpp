
#include <iostream>
using namespace std;

int main()
{
    string s, t;
    int count = 0;
    cin >>s >> t;
    
    for (int i = 0;i < t.length();i++)
    {
        if (s[count] == t[i]) 
        {
           count++;
        }

    }

    count++;
    cout << count << endl;
}


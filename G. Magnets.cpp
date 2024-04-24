#include <iostream>
using namespace std;

int main()
{
    int n, count = 1;
    cin >> n;
    string a;
    for (int i = 0; i < n; i++)
    {
        string b;
        cin >> b;
        if (i == 0) 
        {
            a = b;
            continue;
        }
        if (a[1] == b[0])
        {
            count++;
        }
        a = b;

    }
    cout << count << endl;
    
    return 0;
}


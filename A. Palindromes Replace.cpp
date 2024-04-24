
#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    int n = S.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (S[i] != '?' && S[n - i - 1] != '?' && S[i] != S[n - i - 1])
        {
            cout << "-1" << endl;
            return 0;
        }
        char replace = (S[i] == '?' ? (S[n - i - 1] == '?' ? 'a' : S[n - i - 1]) : S[i]);
        S[i] = S[n - i - 1] = replace;
    }

    for (int i = 0; i < n; i++)
    {
        S[i] = (S[i] == '?' ? 'a' : S[i]);
    }

    cout << S << endl;

    return 0;
}
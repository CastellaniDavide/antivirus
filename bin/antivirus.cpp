// Includes
#include <bits/stdc++.h>
#define DEBUG
using namespace std;

// Variabiles
int T, N1, N2, N3, N4, l;
string s1, s2, s3, s4, sub;
int sol0, sol1, sol2, sol3;

int solve ()
{
    for (size_t i = 0; i < N1 - l + 1; ++i)
    {
        sub = s1.substr(i, l);

        if (s2.find(sub) != string::npos &&
                s3.find(sub) != string::npos &&
                s4.find(sub) != string::npos)
        {
            sol0 = i;
            sol1 = s2.find(sub);
            sol2 = s3.find(sub);
            sol3 = s4.find(sub);
            return 0;
        }
    }
}

// Main code
int main()
{
    // Cncomment the following lines if you want to read/write from files
    freopen("antivirus_input_1.txt", "r", stdin);
    freopen("antivirus_output_1.txt", "w", stdout);

    // Input
    cin >> T;

    for (size_t t = 0; t < T; ++t)
    {
        cin >> N1 >> N2 >> N3 >> N4 >> l;
        cin >> s1 >> s2 >> s3 >> s4;

        solve();

        cout << "Case #" << t + 1 << ": " << sol0 << " " << sol1 << " " << sol2 << " " << sol3 << endl;
    }

    // End
    return 0;
}

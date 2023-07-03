// Facebook Hacker Cup 2022 > Qualification Round
// 2022.08.27 02:00, 72 hrs

// Problem A: Second Hands

/* Sample Input & Output
5
3 2
1 2 2
5 3
1 2 3 3 1
5 2
1 2 3 4 5
5 5
1 1 2 2 1
1 1
1

Case #1: YES
Case #2: YES
Case #3: NO
Case #4: NO
Case #5: YES
*/


#include <iostream>
#include <map>
#define endl '\n'

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        // Input data
        int N, K;
        cin >> N >> K;

        map<int, int> S;
        int s, sMax = 0;
        for (int n = 0; n < N; n++)
        {
            cin >> s;
            if (S.find(s) == S.end()) S.insert(pair<int, int> (s, 1));
            else
            {
                S.find(s)->second++;
                if (S.find(s)->second > sMax) sMax = S.find(s)->second;
                // can already judge here but should receive all data
            }
        }

        // Judge YES or NO
        string answer = "YES";
        if (N > K * 2 || sMax > 2) answer = "NO";

        // Test
        // cout << (int) N - K * 2 << "\t" << sMax << "\t" << answer << endl;

        // Output
        cout << "Case #" << t + 1 << ": " << answer << endl;
    }

    return 0;
}

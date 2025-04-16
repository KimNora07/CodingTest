#include <bits/stdc++.h>
using namespace std;

int T, answer;
string s;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> T;

    for (int i = 0; i < T; i++) {
        int count = 0;
        answer = 0;
        cin >> s;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == 'O') {
                count++;
                answer += count;
            }
            else {
                count = 0;
            }
        }
        cout << answer << "\n";
    }
    return 0;
}
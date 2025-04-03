#include <bits/stdc++.h>
using namespace std;


int answer;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    for (int i = 0; i < 5; i++) {
        int A;
        cin >> A;
        answer += A * A;
    }
    answer %= 10;
    cout << answer;
    return 0;
}
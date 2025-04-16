#include <bits/stdc++.h>
using namespace std;

int T, H, W, N;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> H >> W >> N;

        if (N % H == 0) cout << H * 100 + N / H<< "\n";
        else cout << N % H * 100 + N / H + 1 << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int A, B, C;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
    while (true) {
        vector<int> v;
        cin >> A >> B >> C;
        if (A == 0 && B == 0 && C == 0) break;
        v.push_back(A);
        v.push_back(B);
        v.push_back(C);
        sort(v.begin(), v.end());
        if (v[2] * v[2] == v[0] * v[0] + v[1] * v[1]) cout << "right" << "\n";
        else cout << "wrong" << "\n";
    }
    return 0;
}
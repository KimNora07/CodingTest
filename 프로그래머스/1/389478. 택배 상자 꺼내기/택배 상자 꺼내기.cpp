#include <string>
#include <vector>

using namespace std;

int answer, skipCount, topBoxes[10000];
int solution(int n, int w, int num) {
    for (int i = 0; i < w; i++)
    {
        if ((n - i) % w == 0)
        {
            topBoxes[i] = n - i * 2;
            skipCount = i;
        }
        else
        {
            if (skipCount == 0) topBoxes[i] = n - i;
            else topBoxes[i] = n - i - skipCount;
        }
    }
    while (true)
    {
        int cnt = 0;
        for (int i = 0; i < w; i++) {
            if (topBoxes[i] == num) cnt++;
        }
        if (cnt != 0) break;
        if (num % w == 0) num++;
        else num += (w + w - 1) - ((num % w) * 2 - 2);
        answer++;
    }
    return answer + 1;
}
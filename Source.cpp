#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>
#include <queue>
#include <deque>
#include <string>
#include <sstream>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <stack>
#include <cstdio>
#include <climits>
#include <tuple>
#include <ctime>
#include <cstring>
#include <numeric>
#include <functional>
#include <chrono>
#include <cassert>
using ll = long long;
using namespace std;
const ll mod = 1e9 + 7;
const int N = 1e6 + 5;
int arr[N], last[N];


void test_case()
{
    int n, q;
    scanf("%d%d", &n, &q);
    int restart_time = -1, now = -1;
    char s[8];
    for (int i = 1; i <= q; i++)
    {
        scanf("%s", s);
        if (s[0] == 'P')
        {
            int x;
            scanf("%d", &x);
            x--;
            if (last[x] > restart_time) printf("%d\n", arr[x]);
            else printf("%d\n", now);
        }
        else if (s[0] == 'R')
        {
            int x;
            scanf("%d", &x);
            restart_time = i;
            now = x;
        }
        else
        {
            int x, y;
            scanf("%d%d", &x, &y);
            x--;
            last[x] = i;
            arr[x] = y;
        }
    }
}

int main()
{
    /*int tc;
    scanf("%d", &tc);
    while (tc--)*/
        test_case();

    return 0;
}

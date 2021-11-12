#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool bulb0 = false;

bool border(double now, bool limit) {
    if (now == 0) {
        if (!bulb0) {
            bulb0 = true;
            limit = true;
        } else {
            limit = false;
        }
    } else if (now < 0) {
        limit = false;
    } else {
        limit = true;
    }
    return limit;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("garland.in", "r", stdin);
    freopen("garland.out", "w", stdout);
    int n;
    double top1;
    scanf("%d %lf", &n, &top1);
    double left = 0, right = top1, ans = 0;
    while ((right - left) > 0.01 / (n - 1)) {
        double mid = (right + left) / 2;
        double last = top1;
        double now = mid;
        bulb0 = false;
        bool limit = border(now, limit);
        for (int i = 3; i <= n; i++) {
            double next = 2 * now - last + 2;
            limit = border(next, limit);
            if (!limit) {
                break;
            }
            last = now;
            now = next;
        }
        if (limit) {
            right = mid;
            ans = now;
        } else {
            left = mid;
        }
    }
    printf("%.2f", ans);
    return 0;
}

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
    return 0;
}

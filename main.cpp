#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("queue.in", "r", stdin);
    freopen("queue.out", "w", stdout);
    int n, pointer_in = 0, pointer_out = 0;
    char sign, value[15];
    cin >> n;
    char arr[n][15];
    for (int i = 0; i < n; i++) {
        cin >> sign;
        //добавили символ в очередь
        if (sign == '+') {
            cin >> value;
            strcpy(arr[pointer_in], value);
            pointer_in++;
        } else {
            //извлекли символ из очереди
            cout << arr[pointer_out] << '\n';
            pointer_out++;
        }
    }
    return 0;
}
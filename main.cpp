#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ifstream file("brackets.in");
    freopen("brackets.out", "w", stdout);
    while (file) {
        int pointer = 0, flag = 1;
        string line;
        char arr[10000];
        file >> line;
        for (int i = 0; i < line.length(); i++) {
            //ввод новой скобочной последовательности
            if (line[i] == '(' or line[i] == '[') {
                arr[pointer] = line[i];
                pointer++;
            } else {
                //закрываем скобочную последовательность
                if (pointer) {
                    if (line[i] == ')') {
                        if (arr[pointer - 1] == '(') {
                            pointer--;
                        } else {
                            flag = 0;
                            break;
                        }
                    } else {
                        if (arr[pointer - 1] == '[') {
                            pointer--;
                        } else {
                            flag = 0;
                            break;
                        }
                    }
                } else {
                    flag = 0;
                    break;
                }
            }
        }
        if (pointer > 0) {
            flag = 0;
        }
        if (line.length()) {
            if (flag) {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        }
    }
    return 0;
}

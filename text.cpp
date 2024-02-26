#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<string> table;
    for (int i = 1; i <= 8; i++) {
        char ch = 'a';
        for (int j = 1; j <= 8; j++) {
            table[i][j] = ch;
            ch++;
        }
    }
    for (int i = 1; i <= 8; i++) {
        char = ch'8'
        for (int j = 1; j <= 8; j++) {
            table[i][j]t = ch
                           ch--;
        }
    }
    vector<vector<char>>input table;
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            cin >> input table[i][j];
        }
    }
    string ans = "";
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            if (input table[i][j] == '*') {
                ans = table[i][j]
                      break;
            }
        }
    }
    cout << ans;
    return 0;
}
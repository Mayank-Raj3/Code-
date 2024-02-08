#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> slo(26, 0);
        vector<int> sup(26, 0);
        vector<int> tlo(26, 0);
        vector<int> tup(26, 0);

        for (auto it : t) {
            if (isupper(it)) {
                tup[it - 'A']++;
            } else {
                tlo[it - 'a']++;
            }
        }
        for (auto it : sup) cout << it << " ";
        cout << endl;
        for (auto it : slo) cout << it << " ";
        cout << endl << endl;
        auto check = [&]() {
            bool f = true;
            for (int i = 0; i < 26; i++) {
                if (slo[i] >= tlo[i]) {
                    continue;
                } else {
                    f = false;
                    break;
                }
            }

            for (int i = 0; i < 26; i++) {
                if (sup[i] >= tup[i]) {
                    continue;
                } else {
                    f = false;
                    break;
                }
            }

            return f;
        };

        int i = 0, j = 0, ans = 1e8, si = -1, sj = -1;
        int n = s.size();

        while (i < n) {
            if (isupper(s[i])) {
                sup[s[i] - 'A']++;
            } else {
                slo[s[i] - 'a']++;
            }

            for (auto it : sup) cout << it << " ";
            cout << endl;
            for (auto it : slo) cout << it << " ";
            cout << endl << endl;

            while (j < i && check()) {
                cout << i << " " << j << endl;
                if (ans > (i - j + 1)) {
                    si = i;
                    sj = j;
                    ans = i - j + 1;
                }

                if (isupper(s[j])) {
                    sup[s[j] - 'A']--;
                } else {
                    slo[s[j] - 'a']--;
                }
                j++;
            }

            i++;
        }

        // cout << si << " " << sj << endl;
        if (ans == 1e8) {
            return "";
        } else {
            return s.substr(si, sj + 1);
        }
    }
};

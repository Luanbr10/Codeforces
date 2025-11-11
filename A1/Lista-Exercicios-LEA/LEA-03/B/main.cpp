#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    while (n--) {
        string b;
        cin >> b;
        int open_brackets = 0;
        int stones = 0;
 
        for (char c : b) {
            if (c == '<') {
                open_brackets++;
            } else if (c == '>') {
                
                if (open_brackets > 0) {
                    stones++;
                    open_brackets--;
                }
            }
        }
        cout << stones << endl;
    }
    return 0;
}
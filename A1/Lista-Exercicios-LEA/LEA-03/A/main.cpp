#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    stack <string> navegation;
 
    int n = 0;
    string navi;
    
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> navi;
        if (navi != "<"){
            navegation.push(navi);
            cout << navegation.top() << endl;
        }
        else if (navi == "<"){
 
            if (!navegation.empty()){
                navegation.pop();
 
                    if (!navegation.empty()){
                        cout << navegation.top() << endl;
                    }
                    else{
                        cout << "pagina em branco" << endl;
                    }
            }
            else if (navegation.empty()){
                cout << "pagina em branco" << endl;
            }
        }
    }
    return 0;
}
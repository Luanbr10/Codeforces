#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
ll fibo(ll num){
    if (num == 0){
        return 0;
    }
    else if (num == 1){
        return 1;
    }
    else{
        return 2*fibo(num - 1) + fibo(num - 2);
    }
    return 0;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        ll num;
        cin >> num;
        cout << fibo(num) << endl;
    }
    
    return 0;
}
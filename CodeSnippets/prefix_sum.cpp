
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<ll> a(n), p(n); 

    LOOP(0, n){
    cin >> a[i];        
    }

    LOOP(0, n){
    p[i] = (i ? p[i-1] : 0 ) + a[i];
}
}


#include <iostream>
#include <vector>

using namespace std;
long long sol(long long n){
    if(n%2 == 0)
        return n/2;
    else
        return -(n+1)/2;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long n;
    cin >> n;
    cout << sol(n);

    return 0;
}
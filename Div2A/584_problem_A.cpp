#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int n,t;
    cin >> n >> t;
    if(n == 1 && t == 10)
        cout << -1;
    else{
        cout << t;
        if(t <= 9)n--;
        else n-=2;
        while(n--){
            cout << "0";
        }
    }
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--){
        int a,b,c;
        cin >> a >> b >> c;
        int diff = max(a,b)-min(a,b);
        if(c+diff > diff*2 && max(max(a,b),c) <= diff*2)
            cout << c - diff << endl;
        else{
            if(c+ diff <= diff*2 && max(max(a,b),c) <= diff*2) cout << c + diff << endl;
            else cout << -1 << endl;
        }
    }
    return 0;
}
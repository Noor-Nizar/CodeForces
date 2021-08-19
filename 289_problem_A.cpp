#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,k;
    cin >> n >> k;
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        d += b-a+1;
    }
    if (d%k == 0) cout << 0;
    else cout << abs(k-d%k);

    return 0;
}
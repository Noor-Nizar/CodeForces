#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int n,m;
    cin >> n >> m;
    bool bw = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if(c != 'W' && c != 'B' && c != 'G'){
                bw = false;
            }
        }
    }
    if(bw)
        cout << "#Black&White";
    else
        cout << "#Color";

    return 0;
}
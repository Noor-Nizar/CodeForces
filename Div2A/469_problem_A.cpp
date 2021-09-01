#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int p;
    cin >> p;
    vector<int>combined(p);
    for (int i = 0; i < p; i++)
    {
        cin >> combined[i];
    }
    int q;
    cin >> q;
    combined.resize(p+q);
    for (int i = p; i < q+p; i++)
    {
        cin >> combined[i];
    }
    vector<bool> can(n+1);
    for (int i = 0; i < p+q; i++)
        can[combined[i]] = true;

    bool bcan = true;
    for (int i = 1; i < n+1; i++)
    {
        if(can[i] == false){
            bcan = false;
            break;
        }
    }
    if(bcan)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
    
    return 0;
}
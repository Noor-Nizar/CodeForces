#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;

    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        int pi;
        cin >> pi;
        res[pi-1]=i+1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    
    return 0;
}
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n, t;
    cin >> n >> t;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        string in;
        cin >> in;
        bool good = true;
        for (int j = 0; j <= t; j++)
        {
            good = (in.find(to_string(j)) != -1 && good);
        }
        count += good;
    }
    cout << count;
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n, t;
    cin >> n >> t;
    string res = "YES";
    for (int i = 0; i < n; i++)
    {
        int s[4];
        cin >> s[0] >> s[1];
        s[2] = 7-s[0];
        s[3] = 7-s[1];
        for (int i = 0; i < 4; i++)
        {
            if(s[i] == t){
                res = "NO";
                break;
            }
        }
        t = 7-t;
    }
    cout << res;
    return 0;
}
#include <iostream>
#include <vector>
#include <cctype>
#include <string>

using namespace std;

int ans(string s, string x){
    int sp = 0;
    int xp = 0;
    while (sp < s.length() && xp < x.length())
    {
        if(s[sp] == x[xp]){
            xp++;
        }
        sp++;
    }
    return x.length()+s.length()-2*xp;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--){
        string n;
        cin >> n;
        int minv = INT_MAX;
        long long curr = 1;
        for (int i = 1; i < 63; i++)
        {
           minv = min(minv, ans(n,to_string(curr)));
           curr *= 2;
        }
        cout << minv << endl;
        
    }
    return 0;
}
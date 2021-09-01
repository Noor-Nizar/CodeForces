#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

string func(int len, string s){
    if(len < 26)
        return "NO";
    vector<bool>v(26);
    for (int i = 0; i < len; i++)
    {
        v[tolower(s[i]) - 'a'] = true;
    }
    for (size_t i = 0; i < 26; i++)
    {
        if(v[i] == false){
            return "NO";
        }
    }
    return "YES";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int len;
    cin >> len;
    string s;
    cin >> s;
    cout << func(len, s);
    return 0;
}
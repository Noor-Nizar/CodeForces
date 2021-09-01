#include <iostream>
#include <vector>

using namespace std;
string solve(vector<string> t){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int dS = 0;
            int hS = 0;
            dS += int(t[i+1][j+1] == '#');
            dS += int(t[i][j+1] == '#');
            dS += int(t[i+1][j] == '#');
            dS += int(t[i][j] == '#');
            hS += int(t[i+1][j+1] == '.');
            hS += int(t[i][j+1] == '.');
            hS += int(t[i+1][j] == '.');
            hS += int(t[i][j] == '.');
            if(dS >= 3 || hS >= 3)
                return "YES";
        }
        
    }
    return "NO";
    
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    vector<string>t(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> t[i];
    }
    
    cout << solve(t);

    return 0;
}
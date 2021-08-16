#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int solve(vector<vector<int>> tbl,int n){
    int stat = 0;
    int minv = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> tbl[i][0] >> tbl[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        if(tbl[i][0] != tbl[i][1])
            return 1;
        if(tbl[i][0] > minv)
            stat = -1;
        minv = min(minv, tbl[i][0]); 
    }
    
    return stat;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    vector<vector<int>> tbl(n, vector<int>(n));
    int sol = solve(tbl,n);
    if(sol == 1)
         cout << "rated";
    else if(sol == -1)
        cout << "unrated";
    else 
        cout << "maybe";
    return 0;
}
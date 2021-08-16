#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<int>unique(1001, 0);
    for (int i = 0; i < n; i++)
    {
        int n;
        cin >> n;
        unique[n]++;
    }
    sort(unique.begin(),unique.end(),[](const int&a, const int& b){
        return a > b;
    });
    bool can = true;
    while(unique[0] > 1){
        if(unique[0] > 1 && unique[1] < 1){
            can = false;
        }
        unique[0]--;
        unique[1]--;

        sort(unique.begin(),unique.begin()+n+1,[](const int&a, const int& b){
        return a > b;
        });
    }
    cout << (can?"YES":"NO");
    return 0;
}
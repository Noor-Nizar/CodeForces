#include <iostream>
#include <vector>
#

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,m;
    cin >> n >> m;
    vector<long long>ln(5);
    vector<long long>lm(5);
    for (int i = 1; i <= n; i++)
    {
        ln[i%5]++;
    }
    for (int i = 1; i <= m; i++)
    {
        lm[i%5]++;
    }
    cout << (ln[0]*lm[0] + ln[1] * lm[4] + ln[2] * lm[3] + ln[3] * lm[2] + ln[4] * lm[1]);
    return 0;
}
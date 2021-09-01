#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


long long fact(int i){

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int N;
        cin >> N;
        int Es = floor(log(N)/log(2));
        long long combs = 0;
        for (int i = 0; i <= Es; i++)
        {
            combs += N;
            N-=2;
        }
        cout << combs % (1000000007);
    }
    
    return 0;
}
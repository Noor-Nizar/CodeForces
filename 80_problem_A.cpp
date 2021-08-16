#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,m;
    cin >> n >> m;
    bool firstPrime = true;
    while(n++ < m-1){
        int fc = 0;
        for (int i = 1; i <= n; i++)
        {
            if(n % i == 0)
                fc++;
        }
        if(fc == 2){
            firstPrime = false;
        }
    }
    int fc = 0;
    for (int i = 1; i <= n; i++)
        {
            if(n % i == 0)
                fc++;
        }
        if(fc > 2)
            firstPrime = false;
    
    cout << (firstPrime?"YES":"NO");

    return 0;
}
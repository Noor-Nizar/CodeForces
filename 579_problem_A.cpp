#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int c = 0;
    while(n > 0){
        if(n%2==0)n/=2;
        else {c++;
            n--;
            }

    }
    cout << c;
    return 0;
}
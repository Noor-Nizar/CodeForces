#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    int nt = n - 1;
    string a;
    cin >> a;
    int count = 1;
    string b;
    while(nt--){
        string in;
        cin >> in;
        if(in == a)
            count++;
        else b = in;
    }
    if(count > n/2)
        cout << a;
    else
        cout << b;
    return 0;
}
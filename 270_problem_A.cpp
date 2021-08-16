#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solve(double n){
    string stat = "YES";
    double x = 3;
    if(n < 60)
        return "NO";
    while(x++){
        if((180-(360/(x-1))) < n && n < (180-(360/x))){
            stat = "NO";
            break;
        }else if(180-(360/(x-1)) == n)
            break;   
    }
    return stat;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        double n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
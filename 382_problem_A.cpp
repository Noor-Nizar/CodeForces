#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solve(string in, string x){
    int pS;
    for (int i = 0; i < in.length(); i++)
    {
        if(in[i] == '|'){
            pS = i;
            break;
        }
    }
    int sr = in.length()-pS-1;

    if(x.length() < abs(pS - sr))
        return "Impossible";
    if((x.length()-abs(pS - sr))%2 != 0)
        return "Impossible";

    int t = (x.length()-abs(pS-sr))/2 + abs(min(0,pS-sr));
    int t2 = (x.length()-abs(pS-sr))/2 + abs(min(0,sr-pS));
    for (int i = 0; i < t; i++)
        {
            in.insert(in.begin(),x[0]);
            x.erase(x.begin());
        }
    for (int i = 0; i < t2; i++)
        {
            in.insert(in.end(),x[0]);
            x.erase(x.begin());
        }
    
    return in;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string in;
    string x;
    cin >> in;
    cin >> x;
    cout << solve(in, x);
    

    return 0;
}
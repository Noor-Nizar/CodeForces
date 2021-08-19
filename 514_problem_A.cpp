#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long d = 0;
    string in;
    cin >> in;
    
    for (int i = 0; i < in.size(); i++)
    {
            if(in[i]-'0' > 4 && (in[i] != '9' || i != 0))
                d += ('9'-in[i])*pow(10,in.size()-i-1);
            else
                d += (in[i]-'0')*pow(10,in.size()-i-1);
    }
    cout << d;

    return 0;
}
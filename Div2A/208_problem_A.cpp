#include <iostream>
#include <vector>
#include <string>
#include <cctype>

//4:35
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string in;
    cin >> in;
    for (int i = 2; i < in.size(); i++)
    {
        if(i >= in.size())
            break;
        if(in[i] == 'B' && in[i-1] == 'U' && in[i-2] == 'W'){
            in.erase(in.begin()+i-2,in.begin()+i+1);
            if(i-2 > 0)
                in.insert(i-2," ");
            i = 1;
        }
    }
    for (int i = 1; i < in.size(); i++)
    {
        if(in[i] == ' ' && in[i-1] == ' '){
            in.erase(in.begin()+i-1);
            i = i-2;
        }
    }
    
    cout << in;
    return 0;
}
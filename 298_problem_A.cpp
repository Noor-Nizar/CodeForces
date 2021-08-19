#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int s;
    cin >> s;
    string r;
    cin >> r;
    int sp = -1;
    int counter = 0;
    int i = 0;int j = 0;int e = 0;
    for (; i < s; i++)
    {
        if(r[i] == '.')
            continue;
        j++;
        if(sp == -1)
            sp = i;
        if(r[i] == 'L') counter++;
        e = r[i] == 'L' ? -1 : 0;

    }
    cout << sp+1 << " " << j+sp-counter+e+1;
    return 0;
}
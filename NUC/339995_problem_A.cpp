#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int c;
    cin >> c;
    vector<int> lst(c);
    for (int i = 0; i < c; i++)
    {
        cin >> lst[i];
    }
    
    sort(lst.begin(),lst.end());
    for (int i = 0; i < c; i++)
    {
        cout << lst[i] << " ";
    }
    

    return 0;
}
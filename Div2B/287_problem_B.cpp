#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n,k;
        cin >> n >> k;
        int sumBigger = 0;
        int sumSmaller = 0;
        vector<int> uniq(n);int c = 0;
        vector<int> freqArr(200000);
        for (int i = 0; i < n; i++)
        {
            int A;
            cin >> A;
            freqArr[A]++;
            if(freqArr[A] == 1)
                uniq[c++] = A;
        }
        for (int i = 0; i < n; i++)
        {
            if(freqArr[uniq[i]] == 0) continue;
            if(freqArr[uniq[i]] < k)
                sumSmaller++;
            if(freqArr[uniq[i]] > k)
                sumBigger++;
        }
        if(sumSmaller >= sumBigger)
            cout << sumBigger << "\n" ;
        else
            cout << -1 << "\n";
    }
    

    return 0;
}
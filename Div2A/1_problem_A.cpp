#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int n,m,a;
    
    cin >> n >> m >> a;
    int c = (n <= a || m <= a)?1:min(ceil((double)m/a),ceil((double)n/a)); 
    long long t = ceil((double)max(m,n)/a);
    cout << t*c;
    return 0;
}
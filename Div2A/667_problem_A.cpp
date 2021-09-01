#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

string sol(double iV, int e, int v,int d, double&t){
    double ee = (3.14159265359) *(double) d/2 *(double) d/2 * e;
    double dv = v - ee;
    if(dv <= 0)
        return "NO";
    t = iV/dv;
    
    return "YES";
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int d,h,v,e;
    double t = 0;
    cin >> d >> h >> v >> e;

    double iV = (3.14159265359) *(double) d/2 *(double) d/2 * h;
    string res = sol(iV, e, v, d, t);
    if(res == "NO")
        cout << "NO";
    else{
        cout << "YES" << endl;
        cout << fixed << setprecision(7) << t;
    }
    return 0;
}
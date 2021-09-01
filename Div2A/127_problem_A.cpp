#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,t;

    cin >> n >> t;

    double td = 0;
    int prvx, prvy;
    for (int i = 0; i < n; i++)
    {

        if(i == 0)
            cin >> prvx >> prvy;
        else
        {
            int px, py;
            cin >> px >> py;

            td += sqrt(pow(px-prvx,2)+pow(py-prvy,2));
            prvx = px;
            prvy = py;
        }
    }
    double time = td/50;   
    cout << fixed << setprecision(7) <<time*t;
    return 0;
}
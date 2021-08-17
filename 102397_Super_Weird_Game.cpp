    #include <iostream>
    #include <vector>
     
    using namespace std;
     
    int main(){
        //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
        int n,k,n1;
        cin >> n >> k;
        n1 = n;
        int mah = 0;
        int bash = 0;
        vector<vector<int>> ma(100001,vector<int>(0));
        vector<vector<int>> ba(100001,vector<int>(0));
        
        for (int i = 0; i < n; i++){
            int entry;
            cin >> entry;
            ma[entry].resize(ma[entry].size()+1);
            ma[entry][ma[entry].size()-1] = i;
        }
        for (int i = 0; i < n; i++){
            int entry;
            cin >> entry;
            ba[entry].resize(ba[entry].size()+1);
            ba[entry][ba[entry].size()-1] = i;
        }

        for (int i = 1; i < min(100001,k); i++)
        {
            if(ma[i].size() != 0){
            int complm = k - i;
                for (int j = 0; j < ma[i].size(); j++)
                {
                    for (int k = ma[complm].size()-1; k >= 0; k--)
                    {
                        if(ma[i][j] < ma[complm][k]){
                            mah++;
                            // cout << "PAIR : (" << ma[i][j] << " , " << ma[complm][k] << ")" << endl;
                        }else{
                            break;
                        }
                    }
                }
            }
            if(ba[i].size() != 0){
            int complm = k - i;
                for (int j = 0; j < ba[i].size(); j++)
                {
                    for (int k = ba[complm].size()-1; k >= 0; k--)
                    {
                        if(ba[i][j] < ba[complm][k]){
                            bash++;
                            // cout << "PAIR : (" << ma[i][j] << " , " << ma[complm][k] << ")" << endl;
                        }else{
                            break;
                        }
                    }
                }
            }
     
        }
        if(mah > bash)
            cout << "MAHMOUD";
        else if(bash > mah)
            cout << "BASHAR";
        else
            cout << "DRAW";
        return 0;
    }
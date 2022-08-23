#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    int t, n;
    cin >> t;
    
    
    while(t--){
        int count = 0, flag = 0;
        string c = "\0";
        cin >> a >> b;
        string z = a+b;
        
        cin >> n;
        string arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            c = c + arr[i];             //now i have both c and z.
        }

        if(c.size() <= z.size()){

            sort(c.begin(), c.end());
            sort(z.begin(), z.end());
            

            for(int i = 0; i < c.size(); i++){
                for(int j = flag; j < z.size(); j++){
                        if(c[i] == z[j]){
                            flag = j + 1;
                            count++;
                            break;
                        }
                }
            }   

            if(count == c.size())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

}

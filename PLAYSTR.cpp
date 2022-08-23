#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t, n, i;
    
    
    cin >> t;
    while(t--){
        int flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0;
        cin >> n;
        char s[n+1];
        char r[n+1];
        
        cin.ignore();
        cin.getline(s, n+1);
        cin.getline(r, n+1);
        
        for(i = 0; i < n; i++){
            if(s[i] == '1')
                flag1++;
            else
                flag2++;

            if(r[i] == '1')
                flag3++;
            else
                flag4++;
        }

        if((flag1 == flag3) && (flag2 == flag4))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
     }
}
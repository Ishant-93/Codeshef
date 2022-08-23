#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, d, flag;
    cin >> t;
    while(t--){
        
        cin >> d;
        int arr[d];
        
        for(int i = 0 ; i < d; i++)
            cin >> arr[i];
        
        int n = sizeof(arr)/sizeof(arr[0]);
        sort(arr, arr + n);
        
            for(int i = 0; i < d; i=i+flag){
            flag = 0;
            for(int j = i; j < d; j++){
                if(arr[i] == arr[j])
                    flag++;
            }
            if((flag)%2 != 0){
                cout << arr[i] << endl;
            }
        }
    }
}

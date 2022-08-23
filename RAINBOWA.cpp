#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, count = 0, flag = 0;
        cin >> n;
        int arr[n], arr2[(n/2)+1];
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] > 7 || arr[i] < 1)
                count++;
        }
        
        for(int i = 0; i < n/2; i++){
            if(!(arr[i] == arr[n-i-1])){
                count++;
                break;
            }
        } 


        copy(arr, arr + n/2 + 1, arr2);
        sort(arr2, arr2 + n/2 + 1);

        for(int i = 0; i < n/2; i++){
            if(!(arr[i]==arr2[i])){
                count++;
            }
        }

        for(int i = 1; i < 8; i++){
            for(int j = 0; j < n/2 + 1; j++){

                if(arr[j] == i){
                    flag++;
                    break;
                }
            }
        }
      
        
        if((count == 0) && (flag == 7)){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }

   
    }
    return 0;
    
}
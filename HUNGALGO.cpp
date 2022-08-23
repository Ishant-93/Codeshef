#include<bits/stdc++.h>
using namespace std;

int main(){

    int t, sum = 0;
    cin >> t;

    while((t--) && sum <= 2*pow(10, 6)){
        
        int n, count = 0, flag = 0, count_2 = 0;
        cin >> n;
        sum = sum + pow(n,2);

        if(n >= 2 && n <= 500){
            int arr[n][n];

            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    cin >> arr[i][j];
                    if(arr[i][j] < 0)
                        flag++;
                }
            }

            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(arr[i][j] == 0){
                        count++;
                        break;
                    }
                }
            }
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(arr[j][i] == 0){
                        count_2++;
                        break;
                    }
                }
            }

            if(count >= n && count_2 >= n && flag == 0)
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }

    }
    return 0;
}
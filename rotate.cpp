#include <bits/stdc++.h>

using namespace std;
   
void solve(int arr[][],int n) {
 
    
     
    for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - i - 1; j++) {
            
            int tmp = arr[i][j];
            arr[i][j] = arr[n - j - 1][i];
            arr[n - j - 1][i] = arr[n - i - 1][n - j - 1];
            arr[n - i - 1][n - j - 1] = arr[j][n - i - 1];
            arr[j][n - i - 1] = tmp;
        }
    }
}
 
int main() {
    int R,C;
    cin>>R>>C;
    
    int arr[R][C] ;
    for(i=0;i<R;i++)
    for(j=0;j<C;j++)
    cin>>arr[i][j];
    
    solve(arr,C);
     
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
             
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}

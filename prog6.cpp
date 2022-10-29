#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n;

    for(int i=0;i<n;i++){
        k=1;
        for(int j=0;j<n;j++){
            if( j<=n-i-1){
                cout << k;
            }
                k++;
            // cout << " ";
        }
        cout << "\n";
    }
}
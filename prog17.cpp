#include<iostream>
using namespace std;

int main(){
    int n,k=-1,j=0;
    cin >> n;

    for(int i=0;i<2*n-1;i++){
        i<=n-1?k++:k--;
        for(j=0;j<2*n;j++){
            if(j<=k || j>=(2*n)-k-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}

/*

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *








*/
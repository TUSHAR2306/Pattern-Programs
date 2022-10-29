#include<iostream>
using namespace std;

int main(){
    int n,k=-1;
    cin >> n;

    for(int i=0;i<2*n-1;i++){
        i<=n-1?k++:k--;
        for(int j=0;j<n;j++){
            if(j>=0 && j<=k){
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

*    
**
***
****
*****
****
***
**
*





*/
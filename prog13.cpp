#include<iostream>
using namespace std;

int main(){
    int n,k=0;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            j<=n-1?k++:k--;
            if(j<=i || j>=2*n-i-1){
                if(j>n-1)
                cout << k+1 ;
                else{
                    cout << k;
                }
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}


/*

1        1
12      21
123    321
1234  4321
1234554321



*/
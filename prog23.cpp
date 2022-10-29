#include<iostream>
using namespace std;

int main(){
    int n;
    char k;
    cin >> n;

    for(int i=1;i<=n;i++){
        k='1';
        for(int j=1;j<=2*n-1;j++){
            if(j>=n-i+1 && j<=n+i-1){
                if(j==n+1)k='A';
                cout << k;
                k++;
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}

/*

    1   
  12A
 123AB
1234ABC



*/
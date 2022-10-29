#include<iostream>
using namespace std;

int main(){
    int n,k=1;
    cin >> n;

    for(int i=1;i<=n;i++){
        i%2==0?k=0:k=1;
        for(int j=1;j<=n;j++){
            if(j<=i){
                cout << k;
                if(k){
                    k=0;
                }
                else{
                    k=1;
                }

            }
        }
        cout << "\n";
    }
}

/*

1
01
101
0101
10101



*/
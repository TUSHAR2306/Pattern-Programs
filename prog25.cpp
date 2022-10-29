#include<iostream>
using namespace std;

int main(){
    int n,k=0,x;
    cin >> n;

    for(int i=1;i<=2*n-1;i++){
        i<=n?k++:k--;
        x=1;
        for(int j=1;j<=n;j++){
            if(j>=n-k+1){
                cout << x;
                x++;
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
   12
  123
 1234
12345
 1234
  123
   12
    1





*/
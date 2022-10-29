#include<iostream>
using namespace std;

int main(){
    int n,x,start,end;

    cin >> n;
    x=n+1;
    start=1;
    end=2*n-1;
    
    for(int i=1;i<=2*n-1;i++){
        x--;
        for(int j=1;j<=2*n-1;j++){
            if(j==start || j==end || i==start || i==end){
                cout << x;
            }
            
            start++;
            end--; 
        }
        cout << "\n";
    }

}
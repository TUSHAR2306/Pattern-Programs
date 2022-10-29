#include<iostream>
using namespace std;

int main(){
    int n,k=-1;
    cin >> n;

    for (int i = 0; i < 2*n-1; i++)
    {
        i<=n-1?k++:k--;
        for (int j = 0; j< 2*n-1; j++)
        {
            if(j<=n-k-1 || j>=n+k-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
    
}
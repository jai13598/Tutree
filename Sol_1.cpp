#include <iostream>
using namespace std;
void Print_Pattern(int n){
    int i,k,j;
    for(i=1;i<=n;i++){
        for(int k=1;k<=i-1;k++){
            cout<<" ";
        }
        for(int j=i;j<=n;j++){
            cout<<" "<<j;
        }
        cout<<endl;
    }
    int num=i-2;
    for(int a=1;a<n;a++){
        for(k=a+1;k<n;k++){
            cout<<" ";
        }
        for(j=num;j<=n;j++){
            cout<<" "<<j;
        }
        num--;
        cout<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    Print_Pattern(n);
    return 0;
}

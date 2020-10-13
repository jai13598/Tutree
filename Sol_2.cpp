#include <iostream>
using namespace std;
#include<algorithm>
#include<string.h>
void Get(string str1,string str2){
    int j;
    int n=str1.length();
    int m=str2.length();
    for (int i=0;i<=m-n;i++){ 
        for (j=0;j<n;j++){ 
            if (str2[i+j]!=str1[j]){
                break; 
            }
        }
        if (j==n){
            cout<<"substring "<<str1<<" present at index "<<i<<endl;
        } 
    } 
} 
int main() {
    string  str1="XYZ";
    string str2="XYYZXZYZXXYZ";
    while(next_permutation(str1.begin(),str1.end())){
            Get(str1,str2);
	}
    Get(str1,str2);
}

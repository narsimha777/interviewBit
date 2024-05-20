/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int res;
    int n;
    cout<<"Enter number of students available: "<<endl;
    cin>>n;
    vector<int>rank(n);
    cout<<"Enter Rank of Each student: "<<endl;
    for(int i=0;i<n;i++){
        cin>>rank[i];
    }
    vector<int>l(n, 1);
    vector<int>r(n, 1);
    for(int i =1;i<n;i++){
        if(rank[i-1]<rank[i]){
            l[i] = l[i-1]+1;
        }
        if(rank[n-i-1]>rank[n-i]){
            r[n-i-1] = r[n-i]+1; 
        }
    }
    for(int i =0;i<n;i++){
        res+=max(l[i],r[i]);
    }
    cout<<"Minimum number of candies required: "<<res<<endl;
    return 0;
}
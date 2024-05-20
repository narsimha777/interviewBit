/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cout<<"Enter number of Stations: ";
    cin>>n;
    cout<<endl;
    int available[n];
    int required[n];
    cout<<"Enter Available amount fuel at each Station: "<<endl;
    for(int i=0;i<n;i++){
        cin>>available[i];
    }
    cout<<"Enter required amount fuel at each Station: "<<endl;
    for(int i=0;i<n;i++){
        cin>>required[i];
    }
    int totalGas = 0;
    int currGas = 0;
    int st = 0;
    for(int i=0;i<n;i++){
        totalGas=totalGas+available[i]-required[i];
        currGas+=available[i];
        currGas-=required[i];
        if(currGas<0){
            currGas = 0;
            st = i+1;
        }
    }
    if(totalGas<0){
        cout<<"Not Possible"<<endl;
    }
    cout<<"Starting station to complete cycle: "<<st<<endl;
}
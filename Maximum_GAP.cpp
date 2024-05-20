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
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v.push_back({arr[i], i});
    }
    sort(v.begin(), v.end());
    int minind=INT_MAX;
    int res =INT_MIN;
    for(auto x:v){
        minind = min(x.second, minind);
        res = max(res, x.second - minind);
    }
    cout<<"Maximum Gap: "<<res<<endl;
    return 0;
}
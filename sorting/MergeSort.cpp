#include <bits/stdc++.h>
using namespace std;

void sort(int a[],int n) {}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int *a = new int[n];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a,n);
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    delete [] a;
    return 0;
}
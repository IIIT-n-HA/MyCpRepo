#include <bits/stdc++.h>
using namespace std;

void sort(int a[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n-1-i; j++) {
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);
        }
    }
}

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
    cout<<"\n";
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    return 0;
}
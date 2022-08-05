// Therefore overall complexity = O(N)*O(N) = O(N*N) = O(N^2)

#include <bits/stdc++.h>
using namespace std;

void sort(int a[], int n) { // -->Sort Function.
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(a[i] > a[j]) swap(a[i],a[j]);
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
    delete [] a;
    return 0;
}
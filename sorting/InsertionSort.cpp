#include <bits/stdc++.h>
using namespace std;

void sort(int a[], int n) {
    if(a[0]>a[1]) swap(a[0],a[1]);
    for(int i=1; i<n; i++) {
        int temp = a[i], k = i-1;
        while(k>=0 && a[k]>temp) {
            a[k+1] = a[k];
            k--;
        }
        a[k+1] = temp;
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
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    delete [] a;
    return 0;
}
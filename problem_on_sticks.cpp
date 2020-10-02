

#include <iostream>
#include <algorithm>
using namespace std ;

int remove_duplicates(long int a[], long int n1){
    if (n1 == 0 || n1 == 1)
        return  n1 ;

    long int n2[n1];
    long int h = 0 ;
    for (long int i = 0; i < n1 - 1; ++i) {
        if (a[i] != a[i+1]){
            n2[h++] = a[i];
        }
    }
    n2[h++] = a[n1 - 1];

    for (long int i = 0; i < h; ++i) {
        a[i] = n2[i];
    }
    return  h ;

}

int main(){
    long int t ;
    cin >> t ;
    while (t--){
        long int n ;
        cin >> n ;
        long int a[n];
        for (long int i = 0; i < n; ++i) {
            cin >> a[i] ;
        }
        sort(a,a+n);
        long int n1 = sizeof(a)/sizeof(a[0]);
        n1 = remove_duplicates(a, n1);
        if (a[0] == 0){
        n1 -- ;
        cout << n1 <<endl ;
        } 
        else{
            cout << n1 <<endl;
        }

    }
    return 0 ;
}



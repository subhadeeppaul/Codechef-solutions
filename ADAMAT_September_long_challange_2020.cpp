#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][n];
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                cin>>a[row][col];
            }
        }
        int count=0;
        for(int i=n-1;i>0;i--){
            if(a[i][i]!=a[i][i-1]+1){
                count++;
                for(int x=0;x<i+1;x++){
                    for(int y=x;y<i+1;y++){
                        swap(a[x][y],a[y][x]);
                    }
                }
            }
            //else{
                //continue;
            //}
        }
        cout<<count<<endl;
    }
}
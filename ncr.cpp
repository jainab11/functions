#include<iostream>
using namespace std;
void printcount(int n){
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}
int main(){
    int n;
    cin>>n;
    printcount(n);
    return 0;

}
// int fact(int n){
//     int factorial =1;
//     for (int i = 1; i<=n; i++)
//     {
//         factorial =factorial*i;
//     }
//     return factorial;
    
// }
// int nCr(int n ,int r){
//     int num = fact(n);
//     int denom= fact(r)*fact(n-r);
//     int ans =num/denom;
//     return ans/denom;

// }
// int main(){
//     int n,r;
//     cin>>n>>r;
//     cout<<"answer is"<< nCr(n,r)<<endl;

// }
#include<iostream>
using namespace std;
// int main()
// {
//     //pow(a,b)
//     int a ,b;
//     cin>>a>>b;
//     int ans= 1;
//     for(int i=1;i<=b;i++){
//         ans=ans*a;

//     }
//     cout<<"answer is "<<ans << endl;
//     return 0;
// }
int pow(){
    int a,b;
    cin>>a>>b;
    int ans =1;
    for(int i=1;i<=b;i++){
    ans=ans*a;

    }
    return ans;

}
int main(){
    

   cout<<"answer is "<< pow()<<endl;
    return 0;
}
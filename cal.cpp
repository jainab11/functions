 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int a,b;
    cout<<"Enter the first number"<<endl;
    cin>> a;
    cout<<"Enter thr second number"<<endl;
    cin>>b;
    
    char op;
    cout<<"Enter the opration you want to perform"<<endl;
    cin>>op;
    switch (op)
    {
    case '+': cout<<(a+b)<<endl;
        
        break;
        
        case '-': cout<<(a-b)<<endl;
        break;

        case '*':cout<<(a*b)<<endl;
        break;
        
        case '/':cout<<(a/b)<<endl;
        break;

        case '%':cout<<(a%b)<<endl;
        break;
    
    default:cout<<"please enter a valid opration"<<endl;
        break;
    }

 }
 
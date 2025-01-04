#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    int c;
    c=b;
    b=a;
    a=c;
    cout<<a<<endl;
    cout<<b<<endl;      
    return 0;

}

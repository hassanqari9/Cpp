#include<iostream>
using namespace std;
int r(int );
int main()
{
    cout<<"\n Enter the value of x ";
    int x;
    cin>>x;
    cout<<"\n Ans: "<<r(x)<<endl;
    return 0;
}
int r(int x)
{
    if (x==0)
    return x;
    else
    return (r(x-1)+2);
}

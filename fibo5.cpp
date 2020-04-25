#include<iostream>
using namespace std;
int main()
{
    int i, a, b, c;
    cin>>i;
    while(i>0)
    {
        a=0;
        b=1;
        while(a+b<=i)
        {
            c=a+b;
            a=b;
            b=c;
        }
        cout<<c<<' ';
        i-=c;
    }
}

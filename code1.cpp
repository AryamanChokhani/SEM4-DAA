#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double fun1(int n)
{
    return pow(1.5,n);
}

int fun2(int n)
{
    return pow(n,3);
}

double fun3(int n)
{
    return pow(2,pow(2,n));
}

int fun4(int n)
{
    return n;
}

double fun5(int n)
{
    return n*(pow(2,n));
}

double fun6(int n)
{
    return pow(2.71,n);
}

double fun7(int n)
{
    return pow(2,pow(2,n+1));
}

double fun8(int n)
{
    return pow(2,n);
}

double fun9(int n)
{
    return log2(log2(n));
}

double fun10(int n)
{
    return pow(2,log2(n));
}


int main()
{
    for(int i=0;i<=99;i++)
    {
        cout<<fun10(i)<<endl;
    }
    
    return 0;
}

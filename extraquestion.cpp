#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%3==0)
    {
        if(n%5==0)
        {
            cout<<"Acadview Learning";
        }
        else
        {
            cout<<"Acadview";
        }
    }
    else if(n%5==0)
    {
                if(n%3==0)
        {
            cout<<"Acadview Learning";
        }
        else
        {
            cout<<"Learning";
        }
    }
    return 0;
}

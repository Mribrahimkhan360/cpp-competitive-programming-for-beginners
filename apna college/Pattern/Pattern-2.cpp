#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter row"<<endl;
    cin>>row;
    cout<<"Enter col"<<endl;
    cin>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==1 || j==1 || i==row || j==col)
            {
                cout<<"*"<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}

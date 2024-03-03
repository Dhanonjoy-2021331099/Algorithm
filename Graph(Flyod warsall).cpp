#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int a[10][10], n;
/*
int min(int a, int b)
{
    return (a<b) ? a : b;
}
*/
void path()
{
    int i,j,k;
    for(k=0; k<n;k++)
    {
        for(i=0; i<n;i++)
        {
            for(j=0; j<n;j++)
            {
                a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
            }
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--)
    {
            int i,j;
    cin >> n;
    for(i =0; i<n;i++)
    {
        for( j=0; j<n;j++)
        {
            cin >> a[i][j];
            //d[i][j] = a[i][j];
        }
    }
    path();

    for(i =0; i<n;i++)
    {
        for( j=0; j<n;j++)
        {
           cout << a[i] [j] <<" ";
        }
        cout << endl;
    }

    }

return 0;
}

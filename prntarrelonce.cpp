#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]= {2,3,4,5,4,4,12,4,4,12,4,6,7,8,6,7,2,3,2,2,2,2,2,9},c=0,j;
    for(int i=0; i<(sizeof(arr)/4); i++)
    {
            for(j=0; j<=i; j++)
            {
                if(arr[i]==arr[j])
                {
                    c++;
                }

            }
            if(c==1)
            {
                cout<<arr[i]<<" ";
            }
            c=0;
    }
}

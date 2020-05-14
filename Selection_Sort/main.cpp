#include <iostream>

using namespace std;
void Selection_Sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=a[i],min_index=i;
        for(int j=i+1;j<n;j++)
        {

            if(a[j]<min)
            {
                min=a[j];
                min_index=j;
            }

        }
        //swap
        int temp=a[i];
        a[i]=a[min_index];
        a[min_index]=temp;
    }
}
int main()
{
     int a[]={10,20,-10,-20,40,5,4,3,2,200,20};//11 elements

    int n=sizeof(a)/sizeof(int);//It will give the number of elements in an array

    Selection_Sort(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}

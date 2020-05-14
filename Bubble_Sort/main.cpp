#include <iostream>

using namespace std;

void Bubble_Sort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

}
int main()
{
     int a[]={10,20,-10,-20,40,5,4,3,2,200,20};//11 elements

    int n=sizeof(a)/sizeof(int);//It will give the number of elements in an array

    Bubble_Sort(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}

#include <iostream>

using namespace std;

void Insertion_Sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
     int current=a[i];
     int j;
     for( j=i-1;j>=0;j--)
     {
         if(current<a[j])
         {

             a[j+1]=a[j];
         }else
         {
             break;
         }

     }
     a[j+1]=current;

    }
}

int main()
{

    int a[]={10,20,-10,-20,40,5,4,3,2,200,20};//11 elements

    int n=sizeof(a)/sizeof(int);//It will give the number of elements in an array

    Insertion_Sort(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

}

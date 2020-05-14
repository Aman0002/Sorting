#include <iostream>

using namespace std;
int partition_(int a[],int si,int ei)
{
    int pivot=a[si],count=0;
    for(int i=si+1;i<=ei;i++)
    {
        if(a[i]<=pivot)
            count++;
    }
    int pivot_Index=si+count;
    //swapping the pivot to its correct position
    int temp=a[pivot_Index];
    a[pivot_Index]=pivot;
    a[si]=temp;

    int p=si;
    int q=ei;
    //All elements which are lesser than or equal to the PIVOT will be on left after the while loop
    //And which are greater than the PIVOT will be on the right side of the PIVOT
    while(p<pivot_Index&&q>pivot_Index)
    {
        if(a[p]<=pivot)
        {
            p++;
        }else if(a[q]>pivot)
        {
            q--;
        }else
        {
            int temp=a[p];
            a[p]=a[q];
            a[q]=temp;
            p++;
            q--;
        }
    }
    return pivot_Index;


}
void quick_Sort(int a[],int si,int ei)
{
    if(si>=ei)
        return ;
    int p=partition_(a,si,ei);
    quick_Sort(a,si,p-1);
    quick_Sort(a,p+1,ei);

}
int main()
{
    int a[]={10,20,-10,-20,40,5,4,3,2,200,20};//11 elements

    int n=sizeof(a)/sizeof(int);//It will give the number of elements in an array

    quick_Sort(a,0,n-1);

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

    return 0;
}

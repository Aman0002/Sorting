#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//used to merge two sorted lists
void merging(int a[],int si,int ei)
{
    int b[ei-si+1]={0};//Intitialising an array with 0
    int p=si;
    int mid=(si+ei)/2;
    int q=mid+1;
    int k=0;//used to fill up the array
    while(p<=mid&&q<=ei)
    {
        if(a[p]<a[q])
        {
            b[k]=a[p];
            p++;
            k++;

        }else if(a[p]>a[q])
        {

            b[k]=a[q];
            q++;
            k++;
        }else
        {
            b[k]=a[p];
            k++;
            p++;
            b[k]=a[q];
            q++;
            k++;
        }

    }
    while(p<=mid)
    {

        b[k]=a[p];
        p++;
        k++;
    }
    while(q<=ei)
    {

        b[k]=a[q];
        k++;
        q++;
    }
    int r=si;
    for(int i=0;i<k;i++)
    {

        a[r]=b[i];
        r++;
    }

}
void mergeSort(int a[],int si,int ei)
{
    if(si>=ei)
        return;
    else
    {
        int mid=(si+ei)/2;
        mergeSort(a,si,mid);
        mergeSort(a,mid+1,ei);
        merging(a,si,ei);//merging two sorted lists
    }
}

int main()
{
    //array for sorting
    int a[]={1,2,4,0,-2,-4};
    mergeSort(a,0,5);//passing si(starting index) and ei(ending index) as index

    for(int i=0;i<6;i++)
    {
      cout<<a[i]<<" ";
    }
    return 0;
}


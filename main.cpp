#include<iostream>
using namespace std;
void sort(int arr[],int i,int size)
{
	int val=arr[i];
	int l=i;
	int r=j;
	while(l<r)
	{
		while(l<r&&arr[r]>val)
		{
			r--;
		}
		if(l<r)
		{
			arr[l]=arr[r];
			l++;
		}
		while(l<r&&arr[l]<=val)
		{
			l++;
		}
		if(l<r)
		{
			arr[r--]=arr[l];
		}
		arr[l]=val;
		sort(arr,i,l-1);
		sort(arr,l+1,j);
	}
}
void sort(int arr[],int size)
{
    sort(arr,0,size);
}
int main()
{
//小张添加的注释
    int arr[]={1,43,32,56,88,12};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    return o;
}
ccc

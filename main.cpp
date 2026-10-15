#include<iostream>
using namespace std;
void sort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
	    for(int j=0;j<size;j++)
	    {
		    if(arr[j+1]<arr[j])
		    {
			    arr[j]=arr[j+1];
		    }
	    }
    }
}
int main()
{
    int arr[]={1,43,32,56,88,12};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
}

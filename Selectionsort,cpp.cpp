//selection sorting program

#include<iostream>
#define MAX_SIZE 100

using namespace std;

int main()
{
	int arr[MAX_SIZE];
	int i,size,temp,j;
	
	cout<<"Enter the size of the Array...."<<endl;
	cin>>size;
	
	cout<<"Enter the elements of the Array :"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	for(j=0;j<size;j++)
    {
      for(i=j+1;i<size;i++)
        if(arr[i]<arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
	
	cout<<"Selection Sorted Array are---- "<<endl;
	for(i=0;i<size;i++)
	{
		cout<<"  "<<arr[i];
	}
	
	
	return 0;
	
}

#include<iostream>

#define MAX_SIZE 100

using namespace std;

int main()
{
	int arr[MAX_SIZE];
	int i,num,size,count=0;
	
	cout<<"Enter the size of Array: "<<endl;
	cin>>size;
	
	cout<<"Enter the elements of an  Array---"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter the element to Search: ";
	cin>>num;
	
	for(i=0;i<size;i++)
	{
		if(arr[i]==num)
		{
			count+=1;
			cout<<"Element found at ";
			cout<<i+1<<endl;
			break;
		}
	}
	if(count==0)
	{
		cout<<"Element Not Found..";
	}
	
	
	return 0;
}

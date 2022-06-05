#include<iostream>
using namespace std;

void sort(int arr[],int i,int j)
{
	int val = arr[i];
	int l = i;
	int r = j;
	while(l<r)
	{
		while(l < r && arr[r] >= val)
		{
			r--;
		}
		if(l<r)
		{
			arr[l++]=arr[r];
		}
		while(l<r&&arr[l]<=val)
		{
			l++;
		}
		if(l<r)
		{
			arr[r--] = arr[l];
		}
	}
	arr[l]=val;
	sort(arr,i,l-1);
	sort(arr,l+1,j);
}
void sort(int arr[],int size)
{
	sort(arr,0,size);
}

int main()
{
	int arr[]={124,1211,486,135,22,23,12,34,45,56,67};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr,size);
    for(auto i:arr)
    {
        cout<<i<<' ';
    }
    cout<<endl;
	return 0;
}

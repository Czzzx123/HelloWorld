#include<iostream>
using namespace std;

void sort(int arr[],int size)
{
	int tmp = 0;
	for(int i=0; i<size-1;++i)
	{
        for(int j = 0;j<size-1-i;++j)
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=tmp;
            }
        }
	}
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

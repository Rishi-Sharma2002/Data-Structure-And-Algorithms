#include<iostream>
using namespace std;
int main()
{
    int arr[10], size=10, i, elem, j, found=0;
    cout<<"Enter 10 Array Elements: ";
    for(i=0; i<size; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Delete: ";
    cin>>elem;
    for(i=0; i<size; i++)
    {
        if(arr[i]==elem)
        {
	  for(int j=i; j<size; j++)
	    arr[j] = arr[j+1];
	  size--;
	  found++;
	  break;
        }
    }
    if(found==0)
        cout<<"\nElement doesn't found in the Array!";
    else
        cout<<"\nElement Deleted Successfully!";
    cout<<endl;
    cout<<"Final Array:- ";
    for(int i=0;i<size-1; i++)
      cout<<arr[i]<<" ";
    return 0;
}

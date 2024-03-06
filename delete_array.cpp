#include<iostream>
using namespace std;
void del(int size, int position, int arr[])
{
    for(int i=position; i<=size-1;i++)
    {
        arr[i] = arr[i+1];
    }
    for(int i=0; i<size-1;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int arr[6];
    fill_n(arr,6,-1);
    int n,position;
    cout<<"Enter the no of elements";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the index";
    cin>>position;
    del(n,position,arr);
return 0;
}
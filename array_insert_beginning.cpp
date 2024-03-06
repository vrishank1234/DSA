#include <iostream>
using namespace std;
int main(){
    int array[100],n,x;
    cout<<"enter size of array";
    cin>>n;
    cout<<"enter array elements";
    for(int i = 0; i<n ; i++){
        cin>>array[i];
    }
    cout<<"eneter the element to inset at beginning";
    cin>>x;
    for(int i = n ; i>0; i--){
        array[i]=array[i-1];

    }
    array[0] = x ;
    n++;
    cout<<"array elements are :";
    for(int i =0 ; i<n;i++)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}

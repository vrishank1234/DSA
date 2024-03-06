#include <iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    
    int* arr = (int*)calloc(n,sizeof(int));
    for (int i = 0 ; i<n ; i++){
        cin>>*(arr+i);
    }
    
    for (int i = 0 ; i < n ; i++){
        cout<<*(arr+i)<<" ";
    }
    
    return 0;
}
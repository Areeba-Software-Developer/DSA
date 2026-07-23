#include <iostream> 
using namespace std;
int main(){
    int arr[]={1,3,5,7,9};
    int k = 5;
    int prefix[5];
    prefix[0]=arr[0];
    for(int i = 1; i < k; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    cout << "Prefix Sum Sub Equals K is ";
    for (int i = 0; i < k; i++){
        cout << prefix[i] << " ";
    }
     return 0;
}
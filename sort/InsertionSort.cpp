#include <iostream>

using namespace std;

int main() {
    int temp;
    int arr[10] = {1,10,5,8,7,6,4,3,2,9};
    
    for(int i =0;i<9;i++){
        int j=i;
        while(arr[j]>arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            j--;
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int i,j,min,idx=0,temp;
    int array[10] = {1,10,5,8,7,6,4,3,2,9};
    for(i=0;i<10;i++){
        min = 9999;
        for(j=i;j<10;j++){
            if(min > array[j]){
                min = array[j];
                idx = j;
            }
        }
        temp = array[i];
        array[i] = array[idx];
        array[idx] = temp;
    }
    for(i=0;i<10;i++){
        cout<<array[i]<<"\n";
    }
    return 0;
}

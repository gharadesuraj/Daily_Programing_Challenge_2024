#include <iostream>
using namespace std;

 
    void sort(int arr[],int n){
        int low=0;
        int mid=0;
        int high=n-1;

        while(mid<=high){
            if (arr[mid]==0){
                swap(arr[mid],arr[low]);
                mid++;
                low++;
            }
            else if (arr[mid]==1){
                mid++;
            }else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }
    }

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[10]={0,1,1,2,0,0,2,1,2,1};
    sort(arr,10);
    PrintArray(arr,10);

}
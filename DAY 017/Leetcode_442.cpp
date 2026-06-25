#include<iostream>
using namespace std;

void all_duplicates(int arr[], int size){

    for(int i = 0; i < size; i++){

        // check if any element already processed before
        bool alreadyPrinted = false;

        for(int k = 0; k < i; k++){
            if(arr[i] == arr[k]){
                alreadyPrinted = true;
                break;
            }
        }

        if(alreadyPrinted) continue;

        int count = 0;

        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count >= 2){
            cout << arr[i] << " ";
        }
    }
}

int main(){
    int arr[8] = {4,3,2,7,8,2,3,1};
    all_duplicates(arr, 8);
}
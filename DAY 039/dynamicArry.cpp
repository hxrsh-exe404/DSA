#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){

/*    char ch = 'q';
    cout<<sizeof(ch)<<endl;

    char* c = &ch;
    cout<<sizeof(c)<<endl;
*/

//    int* arr = new int[5];

    int n;
    cout<<"Enter a Number --> ";
    cin>>n;
    int* arr = new int[n];          // variable size array
    for(int i=0;i<n;i++){           // taking input in array
        cin>>arr[i];
    }

    int ans = getSum(arr,n);
    cout<<"Answer is --> "<<ans<<endl;
    
    return 0;
}
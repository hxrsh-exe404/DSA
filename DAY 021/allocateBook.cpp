#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){   // 6-->   // (arr,5,2,50)
    int studentCount=1;
    int pagesum=0;

    for(int i=0;i<n;i++){            // 7-->   // i=0,0<5,0++ --> i=2,i=3
        if(pagesum+arr[i]<=mid){     // 8-->   // 0+10<=50 , 10+20<=50 , 10+20+30<=50 false (X)
            pagesum+=arr[i];         // 9-->   // pagesum=0+10, 10+20, (X)
        }else{
            studentCount++;                         // 10-->   // studentCount=2
            if(studentCount>m || arr[i]>mid){       // 11-->  // 2>2 || arr[3]=30>50 true
                return false;                       // 12-->  // return false 
            }
            pagesum=arr[i];            
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m){
    int start = 0;
    int sum = 0;

    for(int i=0;i<n;i++){
        sum+=arr[i];         // 1-->   // 10+20+30+40+50=100
    }
    int end=sum;             // 2-->   // end=100
    int ans=-1;
    int mid=start+(end-start)/2;      // 3-->     // mid=50
    
    while(start<=end){                 // 4-->      // 0<=100
        if(isPossible(arr,n,m,mid)){   // 5 -->     // fun call-->(arr,5,2,50) //  (goto 6)
            ans=mid;                  
            end=mid-1;                 
        }else{
            start=mid+1;               // 13 -->    // start=51
        }
        mid=start+(end-start)/2;       // 14 -->    // mid=75   // (goto 5)
    }
    return ans;                             
}

int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    int m=2;

    cout<<allocateBooks(arr,n,m);
}
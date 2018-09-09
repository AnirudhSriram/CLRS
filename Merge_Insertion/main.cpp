//
//  main.cpp
//  mergeSort
//
//  Created by Anirudh Sriram on 9/3/18.
//  Copyright © 2018 Anirudh Sriram. All rights reserved.
//


//This algorithm is very similar to the mergeSort algorithm but can be slightly more efficienet in a few cases
#include <iostream>
using namespace std ;

void merge_insert(int arr[], int l, int m, int r)
{
    int i , j;
    for(i = l+1 ;i<=r;i++){
        int key = arr[i] ;
        j = i-1 ;
        while(j>=0 && arr[j]>key) {
            arr[j+1] = arr[j] ;
            j-- ;
        }
        arr[j+1] = key ;
    }
    
}

void mergeSort(int arr[],int left,int right)
{
    if(left < right){
        int mid = left+(right-left)/2 ;
        mergeSort(arr,left,mid) ;
        mergeSort(arr,mid+1,right) ;
        merge_insert(arr,left,mid,right) ;
        
    }
}
int main() {
    int n = 7;
    int a[] = {7,1,2,6,3,4,5} ;

    
    
    
    
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout << a[i] ;
    }
    return 0;
}



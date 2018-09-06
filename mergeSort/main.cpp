//
//  main.cpp
//  mergeSort
//
//  Created by Anirudh Sriram on 9/3/18.
//  Copyright © 2018 Anirudh Sriram. All rights reserved.
//

#include <iostream>
using namespace std ;

void merge(int arr[], int l, int m, int r)
{
    for(int i=0;i<7;i++){
        cout << arr[i] ;
    }
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    
    /* create temp arrays */
    int L[n1], R[n2];
    
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    /* Copy the remaining elements of L[], if there
     are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    /* Copy the remaining elements of R[], if there
     are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int left,int right)
{
    if(left < right){
        int mid = left+(right-left)/2 ;
        mergeSort(arr,left,mid) ;
        mergeSort(arr,mid+1,right) ;
        merge(arr,left,mid,right) ;
        
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



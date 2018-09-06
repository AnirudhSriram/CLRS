//
//  main.cpp
//  BubbleSort
//
//  Created by Anirudh Sriram on 9/6/18.
//  Copyright © 2018 Anirudh Sriram. All rights reserved.
//

#include <iostream>
using namespace std ;
void bubbleSort(int arr[],int n) {
    int j = n ;
    while(j>=0) {
        for(int i=0;i<n-1;i++) {
            if(arr[i]>arr[i+1]) {
                int temp = arr[i] ;
                arr[i] = arr[i+1] ;
                arr[i+1] = temp ;
            }
        }
        j-- ; 
    }
    
    
}
int main(int argc, const char * argv[]) {
    int n = 5 ;
    int a[] = {7,10,22,4,0} ;
    bubbleSort(a,n) ;
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    return 0;
}

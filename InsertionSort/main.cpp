//
//  main.cpp
//  InsertionSort
//
//  Created by Anirudh Sriram on 8/28/18.
//  Copyright © 2018 Anirudh Sriram. All rights reserved.
//

#include <iostream>
using namespace std  ;
int main(int argc, const char * argv[]) {
    int n = 5 ;
    int a[] = {5,4,2,3,1} ;
    for(int i = 0 ; i<n;i++){
        int key = a[i] ;
        int j = i-1 ;
        while(j>=0 && a[j] > key) {
            a[j+1] = a[j] ;
            j-- ;
        }
        a[j+1] = key ;
    }
    for(int i=0;i<n;i++){
        cout <<a[i] ;
    }
    
    return 0;
}

/*************************************************************************
	> File Name: bubblesort.cpp
	> Author: Lu Di
	> Mail: me@ludics.cn
	> Created Time: 2018年08月25日 星期六 17时12分53秒
 ************************************************************************/

#include<iostream>
#include "sort.h"
using namespace std;



template<typename T>
void bubblesort( T A[], int n ){
    bool sorted = false;
    while(!sorted){
        sorted = true;
        for ( int i = 0; i < n; ++i ){
            if ( A[i - 1] > A[i] ){
                swap( A[i -1], A[i] );
                sorted = false;
            }
        }
        n--;
    }
}


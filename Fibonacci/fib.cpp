/*************************************************************************
	> File Name: fib.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月25日 星期六 15时44分54秒
 ************************************************************************/

#include<iostream>
#include<ctime>
#include<cstdio>
#include<cstdlib>
using namespace std;

#include "fib.h"

long long fibI ( int n );
long long fib ( int n );
long long fib ( int n, long long &f );

int main(int argc, char* argv[]){
    if ( 2 > argc ) {
        fprintf( stderr, "Usage: %s <rank>\n", argv[0] );
        return 1;
    }


    int n = atoi( argv[1] );
    clock_t start_timer, end_timer, stay_timer[4];
    
    printf("\n-----class Fib-------\n");
    start_timer = clock(); 
    Fib f(0);
    for ( int i = 0; i < n; i++, f.next() ){
        printf( "fib(%2d) = %d\n", i, f.get() );
    }
    for ( int i = 0; i < n; i++, f.prev() ){
        printf( "fib(%2d) = %d\n", n - i, f.get() );
    }
    end_timer = clock();
    stay_timer[0] = end_timer - start_timer;
    printf("\n--------Iteration-------\n");
    start_timer = clock(); 
    for ( int i = 0; i < n; i++ ){
        printf( "fib(%2d) = %lld\n", i, fibI(i) );
    }
    end_timer = clock();
    stay_timer[1] = end_timer - start_timer;
    printf("\n--------Linear Recursion-------\n");
    start_timer = clock(); 
    for ( int i = 0; i < n; i++ ){
        long long f;
        printf( "fib(%2d) = %lld\n", i, fib(i, f) );
    }
    end_timer = clock();
    stay_timer[2] = end_timer - start_timer;
    printf("\n--------Binary Recursion-------\n");
    start_timer = clock(); 
    for ( int i = 0; i < n; i++ ){
        printf( "fib(%2d) = %lld\n", i, fib(i) );
    }
    end_timer = clock();
    stay_timer[3] = end_timer - start_timer;
    printf("\nCost time:\n");
    for (int i = 0; i < 4; ++i){
        printf("%f\n",(double) stay_timer[i] /1000 );
    }

}

long long fibI(int n){
    long long f = 1;
    long long g = 0;
    for ( int i = 0; i < n; i++){
        f += g; g = f - g;
    }
    return g;
}

long long fib(int n){
    if ( 2 > n ) return (long long) n;
    else return fib(n-1) + fib(n-2);
}

long long fib( int n, long long &prev ){
    if ( 0 == n ){
        prev = 1; return 0;
    }
    else {
        long long prevPrev; prev = fib (n - 1, prevPrev);
        return prevPrev + prev;
    }
}


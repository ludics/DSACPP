/*************************************************************************
	> File Name: gcd.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月25日 星期六 20时41分00秒
 ************************************************************************/

#include<iostream>
#include<cstdlib>
using namespace std;

int gcdCN(int, int);
int main(){
    int a = 100, b = 150;
    cout << gcdCN( a, b );
}


int gcdCN(int a, int b){
    int p = 1;
    while ( !((a & 1) || (b & 1)) ){
        a >>= 1; b >>= 1;
        p <<= 1;
    }
    int t;
    ( a > b ) ? t = a - b : t = b - a;
    while ( t != 0 ){
        while ( !(t & 1) ){
            t >>= 1;
        }
        ( a < b ) ? b = t : a = t;
        ( a > b ) ? t = a - b : t = b - a;
    }
    return a * p;
}

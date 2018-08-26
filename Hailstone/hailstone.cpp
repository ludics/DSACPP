/*************************************************************************
	> File Name: hailstone.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月26日 星期日 01时25分53秒
 ************************************************************************/

#include<iostream>
#include<cstdlib>
using namespace std;


template <typename T> struct Hailstone{
    virtual void operator() (T & e){
        int step = 0;
        while ( 1 != e ){
            ( e % 2 ) ? e = 3 * e + 1 : e /= 2;
            step++;
        }
        e = step;
    }
};

int main(int argc, char * argv[]){
    int e = atoi(argv[1]);
    Hailstone<int> hail;
    hail(e);
    cout << e;
}

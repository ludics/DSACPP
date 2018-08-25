/*************************************************************************
	> File Name: sort.h
	> Author: 
	> Mail: 
	> Created Time: 2018年08月25日 星期六 17时16分44秒
 ************************************************************************/

#ifndef _SORT_H
#define _SORT_H

template<typename T>
void my_swap(T& t1, T& t2){
    T temp;
    temp = t1;
    t1 = t2;
    t2 = temp;
}


#endif

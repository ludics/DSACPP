/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月25日 星期六 17时20分33秒
 ************************************************************************/

#include<iostream>
#include"bubblesort.cpp"
using namespace std;

//template<typename T>
//void bubblesort(T A[], int n);

int main(){

    int A[10] = {8,9,3,5,2,0,1,4,7,6};
    bubblesort<int>(A, 10);
    for (int i = 0; i < 10; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}

/*************************************************************************
	> File Name: lcs.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月26日 星期日 22时07分22秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;


string lcs_rec(string A, int m, string B, int n){
    if(m==-1||n==-1) return "";
    else if(A[m]==B[n]) return lcs_rec(A,m-1,B,n-1)+A[m];
    else{
        string a = lcs_rec(A,m-1,B,n);
        string b = lcs_rec(A,m,B,n-1);
        if(a.size() < b.size()) a = b;
        return a;
    }
}


int main(int argc, char *argv[]){
    
    string A(argv[1]);
    string B(argv[2]);
    int m = A.length();
    int n = B.length();
    cout << lcs_rec(A,m-1,B,n-1);
    return 0;
}

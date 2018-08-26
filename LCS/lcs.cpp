/*************************************************************************
	> File Name: lcs.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月26日 星期日 22时07分22秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;


string lcs_rec(string A, int m, string B, int n){
    if(m==0||n==0) return "";
    else if(A[m-1]==B[n-1]) return lcs_rec(A,m-1,B,n-1)+A[m-1];
    else{
        string a = lcs_rec(A,m-1,B,n);
        string b = lcs_rec(A,m,B,n-1);
        if(a.size() < b.size()) a = b;
        return a;
    }
}

int lcs_it(string A, int m, string B, int n){
    vector<vector<int> > mat(m+1, vector<int>(n+1));
    for(int i = 0; !(i>m); i++)
        mat[i][0] = 0;
    for(int j = 0; !(j>n); j++)
        mat[0][j] = 0;

    for (int i = 1; !(i>m); i++){
        for (int j = 1; !(j>n); j++){
            if(A[i-1]==B[j-1])
                mat[i][j] = mat[i-1][j-1] +1;
            else{
                mat[i][j] = max(mat[i-1][j], mat[i][j-1]);
            }
        }
    }
    return mat[m][n];
}




int main(int argc, char *argv[]){
    
    string A(argv[1]);
    string B(argv[2]);
    int m = A.length();
    int n = B.length();
    cout << lcs_it(A,m,B,n) << endl;
    cout << lcs_rec(A,m,B,n) <<endl;
    return 0;
}

/* constraint : 1 <= length(A), length(B) <= 700 */
#include<iostream>
#include<string>
using namespace std;
int dp[700][700];
int _numDistinct(string A,string B,int i,int j)
{
    if(dp[i][j]!=-1) return dp[i][j];
    if(j==B.length()) return 1;
    if(i==A.length()) return 0;
    if(A[i]!=B[j])
    {
        return dp[i][j]=_numDistinct(A,B,i+1,j);
    }
    else
    {
        return dp[i][j]=_numDistinct(A,B,i+1,j)+_numDistinct(A,B,i+1,j+1);
    }
}
int numDistinct(string A, string B) {
    
    for(int i=0;i<700;i++)
    {
        for(int j=0;j<700;j++)
        {
            dp[i][j]=-1;
        }
    }
    return _numDistinct(A,B,0,0);    
}
int main()
{
string A;
string B;
cin>>A;
cin>>B;
cout<<numDistinct(A,B);
return 0;
}
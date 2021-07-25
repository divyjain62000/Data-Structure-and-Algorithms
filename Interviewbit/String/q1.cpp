#include<iostream>
#include<string>
using namespace std;
int isPalindrome(string A) 
{
    string str="";
    int as=A.length();
    for(int i=0;i<as;i++)
    {
        if((A[i]>='0' && A[i]<='9') || (A[i]>='a' && A[i]<='z') || (A[i]>='A' && A[i]<='Z') )
        {
            str+=A[i];
        }
    }
    int len=str.length();
    int j=len-1;
    for(int i=0;i<len/2;i++)
    {
        if(toupper(str[i])!=toupper(str[j])) return 0;
        j--;
    }
    return 1;
}
int main()
{
string A;
getline(cin,A);
cout<<isPalindrome(A);
return 0;
}
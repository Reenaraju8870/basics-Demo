#include<iostream>
using namespace std;
//reversing and checking if palindrome
int reverse(int n){
    int r=0;
    while(n>0){
        int lastno =n%10;
        r = r*10+lastno;
        n=n/10;
    
    }
    return r;
}
int main(){
    int n;
    cin>>n;
    cout<<"the reversed no. is:"<<reverse(n);
    int rev=reverse(n);
    if (rev==n){
        cout<<"\nPalindrome";
    }
    else{
        cout<<"Not Palindrome";
    }

    return 0;
}
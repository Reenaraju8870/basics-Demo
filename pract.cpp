#include <iostream>
using namespace std;
void fun(int n){
    if(n==0){
        return;
    }
    cout<<"hello"<<n<<endl;
    fun(n-1);
    cout<<"bye"<<n<<endl;
}
int main(){
    fun(10);
    return 0;
}
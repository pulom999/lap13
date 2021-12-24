#include<iostream>
#include <ctime>
using namespace std;

long long int fibonacci(long long int x);

int main(){
    cout << fibonacci(50);
    return 0; 
}

long long int fibonacci(long long int x){
    if(x<=1){
        return x;
    }else{
        return fibonacci(x-1)+fibonacci(x-2);
    }
}
#include<iostream>
using namespace std;

int fibonacci(int input);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int input){
  if(input <= 1)return input;
  else return fibonacci(input-1) + fibonacci(input-2);
}

#include<iostream>
using namespace std;

long long int fibonacci(int);

int main(){
    cout << fibonacci(50);
    return 0; 
}

long long int fibonacci(int input){
  if(input == 1 || input == 0)return input;
  else if(input > 1)return fibonacci(input-1) + fibonacci(input-2);
  else return 0;
}

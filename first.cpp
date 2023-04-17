#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int f(int n) { 
    int a, b, sum, count; 
    a = count = sum = 0; 
    b = 1; 
    while (count < n) { 
        sum = a + b; 
        a = b; 
        b = sum; 
        count++; 
    } 
    return a; 
} 
int main(){
    cout << "Hello, World!\n";
    int n; 
    cout << "n="; cin >> n; 
    cout << f(n) << "\n"; 
    return 0;
}


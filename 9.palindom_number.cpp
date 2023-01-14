#include<iostream>
#include<limits.h>

using namespace std;

int main(){
        int x;
        cin >> x;
        int n = x;
        int reversed = 0;
        int remainder;
        while (n > 0) {
        remainder = n % 10;
        if(reversed < INT_MAX / 10)
        reversed = (reversed * 10 )+ remainder;
        n = n / 10;
    }
    if(x == reversed){
        return true;
    }
    else{
        return false;
    }
    }

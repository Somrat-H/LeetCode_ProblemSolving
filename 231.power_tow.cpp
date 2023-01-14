#include<iostream>
#include<limits.h>
using namespace std;

int main(){
     int n; 
     cin >> n;
     int ans = 1;
        for(int i = 0; i <= 30; i++)
        {   
            if(n == 1){
                return true;
            }
            if(ans < INT_MAX /2)
            ans = ans * 2;
            if(ans == n){
                return true;
            }
        }
        return false;
}
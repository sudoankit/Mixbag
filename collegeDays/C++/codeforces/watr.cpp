#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n > 0 && n <= 100){
    
    if(n % 2 == 1 || n == 2)
	cout << "NO" << '\n';
    else
	cout << "YES" << '\n';
    }
    return 0;
}
        

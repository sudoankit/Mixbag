#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long int a[n];
    for(int i = 0 ; i < n ; i++){
	cin >> a[i];
    }
    long long int sum = 0;
    
    for(int i = 0; i < n ; i++){
	sum += a[i];
    }
    cout << sum;
    
    return 0;
    
}

	  
    

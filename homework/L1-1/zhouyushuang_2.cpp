
// 第二题




#include<iostream>

using namespace std;

int f(int a,int b){
	
	double res = 0;

if（(a >= 10 && b <= 100) || (b >= 10 && a <= 100)）
	
		if(a <= b){
		
			res = b * (b + 1) / 2;
		
			res -= a * (a + 1) / 2;
		
			cout << res << endl;
		
		}
	
		if(a > b){
		
			res = a * (a + 1) / 2;
		
			res -= b * (b + 1) / 2;
		
			cout << res << endl;
		
		}
	
	return 0;
	
}

int main(){
	
	int a = 0;
	
	int b = 0;
	
	cin >> a >> b;
	
	f(a,b);
	
	return 0;
}


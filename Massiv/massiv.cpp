#include<iostream>
using namespace std;
int main(){
	
	int n , m;
	cout << "Ustun va satrlar sonini kiriting:\n";
	cin >> n >> m;
	int a[n][m];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	
	cout << "Kiritilgan massiv elementlari:\n";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	int maxraj = m*n, s = 0;
	float sum_urta = 0;
	
		for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			s = s + a[i][j];
		}
	}
	cout << "Massiv elementlarini summasi " << s << endl;
	sum_urta = s / maxraj;
	cout << "Massiv elementlarini urta arifmetigi " << sum_urta << endl;
	return 0;
}

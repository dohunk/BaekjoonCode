#include <iostream>
using namespace std;
// 별 찍기2 

int main(){
	int N;
	cin >> N;

	for(int i=0; i<N; i++){
		for(int j=i; j<N-1; j++){
			cout << " ";
		}
		for(int k=0; k<=i; k++){
			cout << "*";
		}
		cout << endl;
	}
}


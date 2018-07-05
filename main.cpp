#include <iostream>
using namespace std;

int main(){

	srand (time(NULL));

	int num1 = rand() % 13 + 1;
	int num2 = rand() % 13 + 1;

	cout << "Your numbers are " << num1 << " and " << num2;
}

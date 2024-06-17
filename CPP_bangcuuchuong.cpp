
#include <iostream>
using namespace std;
int main(){
int n;
cout << "nhap so:";
cin >> n;
if (n < 1 || n > 10)
	{
	cout << "so khong hop le";
	}else {
		for (int i = 1; i <= 10; i++)
	{
		cout << n << "x" << i << "=" << n * i << endl;
	}
		}
return 0;
}
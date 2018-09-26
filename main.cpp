#include <iostream>
using namespace std;
#include "recursive.h"
int main()
{
	int n;
	cout<<"Nhap kich thuoc ban co: "; cin>> n;
	char bc[100][100];
	KhoiTaoBanCo(bc,n);
	XepHau(1,bc,n);
	return 0;
}

// ExampleNTL.cpp
#pragma warning (disable : 4146)
#include <iostream>
#include <NTL/vec_ZZ_p.h>
using namespace std;
using namespace NTL;
int main() {
	ZZ A(8555556756723), B(255554645654), C;
	C = A * B;
	cout << "C=" << C;
}
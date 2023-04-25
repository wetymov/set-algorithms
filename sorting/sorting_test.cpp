#include "Implementation/sorting.h"

using namespace std;

int main() {
	vector<int> a;
	a.push_back(1);
	a.push_back(7);
	a.push_back(2);
	a.push_back(12390);
	a.push_back(8923);

	a = bubble_sort(a);

//for (auto x : a) {
//	cout << x << endl;
//}
	vector<int> A;
	A.push_back(1);
	A.push_back(7);
	A.push_back(2);
	A.push_back(12390);
	A.push_back(8923);

	A = shell_sort(A);
	cout << "asdasdasd" << endl; 

	for (auto k : A) {
		cout << k << endl;
	}

	return 0;
}
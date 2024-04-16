#include <iostream>
using namespace std;

void insertionSort(int* arr, int tam)
{
	int* p, * q, key;
	p = arr + 1;
	while (p < arr + tam) {
		key = *p;
		q = p - 1;
		while (q >= arr && *q > key) {
			*(q + 1) = *q;
			q--;
		};
		*(q + 1) = key;
		p++;
	}
	return;
}

int main()
{
	int x = 0;
	int arr[] = { 3,7,4,1,9 };
	int tam = 5;
	int* p = arr;
	while (p != (arr + tam)) {
		cout << *p << " ";
		p++;
	}
	cout << "\n";
	insertionSort(arr, tam);
	p = arr;
	while (p != (arr + tam)) {
		cout << *p << " ";
		p++;
	}
	cout << "\n";
	return 0;
}
#include <iostream>
#include <algorithm> // Para std::sort
using namespace std;

// Función para ordenar el array usando el algoritmo quicksort
void quicksort(int* arr, int left, int right) {
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];

    // Partición
    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    // Llamadas recursivas
    if (left < j) quicksort(arr, left, j);
    if (i < right) quicksort(arr, i, right);
}

// Función para verificar si x es la suma de dos elementos del array
bool isSumInArray(int* arr, int size, int x) {
    quicksort(arr, 0, size - 1); // Ordenar el array

    // Inicializar punteros para recorrer el array
    int* left = arr;
    int* right = arr + size - 1;

    while (left < right) {
        int sum = *left + *right;
        if (sum == x) {
            return true; // La suma se encuentra en el array
        }
        else if (sum < x) {
            left++; // Avanzar el puntero izquierdo
        }
        else {
            right--; // Retroceder el puntero derecho
        }
    }

    return false; // La suma no se encuentra en el array
}

int main() {
    int arr[] = { 10, 20, 35, 50, 75, 100 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 85;

    if (isSumInArray(arr, size, x)) {
        cout << "La suma se encuentra en el array." << endl;
    }
    else {
        cout << "La suma no se encuentra en el array." << endl;
    }

    return 0;
}

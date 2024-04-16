/*#include <iostream>
using namespace std;

void merge(int* arr1, int* arr2, int m, int n) {
    int* merged = new int[m + n]; // Arreglo dinámico para almacenar el resultado fusionado
    int i = 0, j = 0, k = 0; // Índices para recorrer los subarreglos y el arreglo fusionado

    // Recorre ambos subarreglos mientras haya elementos en ambos
    while (i < m && j < n) {
        // Compara los elementos actuales de ambos subarreglos
        if (*(arr1 + i) <= *(arr2 + j)) {
            merged[k++] = *(arr1 + i++); // Agrega el elemento de arr1 al arreglo fusionado
        }
        else {
            merged[k++] = *(arr2 + j++); // Agrega el elemento de arr2 al arreglo fusionado
        }
    }

    // Agrega los elementos restantes de arr1, si los hay
    while (i < m) {
        merged[k++] = *(arr1 + i++);
    }

    // Agrega los elementos restantes de arr2, si los hay
    while (j < n) {
        merged[k++] = *(arr2 + j++);
    }

    // Copia los elementos fusionados de vuelta a los subarreglos originales
    for (int x = 0; x < m + n; x++) {
        if (x < m) {
            *(arr1 + x) = merged[x];
        }
        else {
            *(arr2 + (x - m)) = merged[x];
        }
    }

    delete[] merged; // Liberar la memoria asignada al arreglo dinámico
}

int main() {
    int arr1[] = { 1, 3, 5 };
    int arr2[] = { 2, 4, 6 };
    int m = sizeof(arr1) / sizeof(arr1[0]); // Tamaño de arr1
    int n = sizeof(arr2) / sizeof(arr2[0]); // Tamaño de arr2

    merge(arr1, arr2, m, n);

    // Imprime el arreglo fusionado y ordenado
    cout << "{";
    for (int i = 0; i < m + n; i++) {
        if (i < m) {
            cout << arr1[i];
        }
        else {
            cout << arr2[i - m];
        }
        if (i < m + n - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;

    return 0;
}*/

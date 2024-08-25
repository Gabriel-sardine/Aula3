#include <iostream>
#include <vector>

using namespace std;
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> numbers = {0, 18, 22, 25, 34, 40, 51, 66, 75, 87};
    int target = 75;
    int target2 = 22;
    int target3 = 90;

    int result = binarySearch(numbers, target);

    cout << "Buscando numero 75\n";

    if (result != -1) {
        cout << "Elemento " << target << " encotrado na posicao " << result << endl;
    } else {
        cout << "Elemento " << target << " nao encontrado no array" << endl;
    }

    result = binarySearch(numbers, target2);

    cout << "Buscando numero 22\n";

    if (result != -1) {
        cout << "Elemento " << target2 << " encotrado na posicao " << result << endl;
    } else {
        cout << "Elemento " << target2 << " nao encontrado no array" << endl;
    }

    cout << "Buscando numero 90\n";

    result = binarySearch(numbers, target3);

    if (result != -1) {
        cout << "Elemento " << target3 << " encotrado na posicao " << result << endl;
    } else {
        cout << "Elemento " << target3 << " nao encontrado no array" << endl;
    }

    return 0;
}

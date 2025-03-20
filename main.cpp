#include <iostream>
using namespace std;
int min_finder(int numbers[], int size) {
    int min = numbers[0];
    for (int i = 0; i < size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    return min;
}
int indexOfLargestElement(double numbers[], int size) {
    int max = numbers[0];
    if (size <= 0)
        return -1;
    for (int i = 0; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
            return i;
        }
        else if (numbers[i] == max) {
            int max_index = i;
            for (int j = i + 1; j < size; j++) {
                if (numbers[j] == max)
                    max_index = j;
            }
            return max_index;
        }
        else return 0;
    }
}

bool strictlyEqual(const int list1[], const int list2[], int size);

bool strictlyEqual(const int list1[], const int list2[], int size) {
    // Iterate through each element in both arrays
    for (int i = 0; i < size; i++) {
        if (list1[i] != list2[i]) {
            return false;  // Return false if any element is not the same
        }
    }
    return true;  // Return true if all elements are identical
}
int main() {
    //p1
    // int n, sum = 0;
    // int* numbers = new int[n];
    // cout << "How many integers do want to enter: ";
    // cin >> n;
    // cout << "Enter " << n <<" integers.";
    // for (int i=0; i<n; i++) {
    //     cin >> numbers[i];
    // }
    //
    // for (int i=0; i<n; i++) {
    //     sum+=numbers[i];
    // }
    // cout << "The sum of the entered integers is: " << sum << endl;
    //
    // delete[] numbers;

    //p2
    // int n, sum = 0;
    // cout << "How many integers do want to enter: ";
    // cin >> n;
    // int numbers[n];
    // cout << "Enter " << n <<" integers."<<endl;
    // for (int i=0; i<n; i++) {
    //     cin >> numbers[i];
    // }
    //
    // for (int i=0; i<n; i++) {
    //     sum+=numbers[i];
    // }
    // float average = sum/n;
    // cout << "Average: " << average << endl;

    //p3
    // int size;
    // cout << "Enter the number of integers: ";
    // cin >> size;
    // int numbers[size];
    // for (int i = 0; i < size; i++) {
    //     cin >> numbers[i];
    // }
    // cout << "Min Value: "<<min_finder(numbers, size);

    //p4
    // int size;
    // cout << "Enter the number of integers: ";
    // cin >> size;
    // double numbers[size];
    // for (int i = 0; i < size; i++) {
    //     cin >> numbers[i];
    // }
    // cout << "Index Largest Value: "<<indexOfLargestElement(numbers, size);

    //p5

        int size;

        cout << "Enter the size of the lists: ";
        cin >> size;

        int list1[size], list2[size];

        cout << "Enter elements for the first list: " << endl;
        for (int i = 0; i < size; i++) {
            cin >> list1[i];
        }

        // Input values for the second list
        cout << "Enter elements for the second list: " << endl;
        for (int i = 0; i < size; i++) {
            cin >> list2[i];
        }


        if (strictlyEqual(list1, list2, size)) {
            cout << "The two lists are strictly identical." << endl;
        } else {
            cout << "The two lists are not strictly identical." << endl;
        }

        return 0;
    }







    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.
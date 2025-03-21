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

bool strictlyEqual(const int list1[], const int list2[], int size) {
    // Iterate through each element in both arrays
    for (int i = 0; i < size; i++) {
        if (list1[i] != list2[i]) {
            return false;  // Return false if any element is not the same
        }
    }
    return true;  // Return true if all elements are identical
}

string count_frq(char characters[], int size) {
    int freq[26] = {0}

    for (int i =0; i < size; i++) {
      if (characters[i]>a && characters[i]<z) {
          freq[characters[i] - 'a']++;
      }
      else if(characters[i]=='0') {
        cout << "Process finished" << endl;
        break;
      }
    }
    cout <<"Frequency of letters:"<<endl;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0)
            cout<<char('a'+i)<<":"<<freq[i]<<endl;
    }
}

void sort_arr(int numbers[], int size) {
  for (int i = 0; i < size-1; i++) {
      int min_index = i;
      for (int j = i+1; j < size; j++) {
          if (min > numbers[j]) {
              min_index = j;
          }
      }
      swap(numbers[i], numbers[min_index]);
  }
  for (int i = 0; i < size; i++) {
    cout << numbers[i] << " ";
  }
}
void reverseArray(int arr[], int start, int end){
    while(start < end)
      swap(arr[start], arr[end]);
    start++;
    end--;
}
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

void sorted_checker(int numbers[], int size){
    bool num_check = true;
    for (int i = 0; i < size-1; i++) {
        if (numbers[i] > numbers[i+1]) {
          num_check = false;
          break;
        }
    }
    if(num_check) cout << "YES" << endl; else cout << "NO" << endl;
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
//    int size;

//    cout << "Enter the size of the lists: ";
//    cin >> size;
//
//    int list1[size], list2[size];
//
//    cout << "Enter elements for the first list: " << endl;
//    for (int i = 0; i < size; i++) {
//        cin >> list1[i];
//    }

//    cout << "Enter elements for the second list: " << endl;
//    for (int i = 0; i < size; i++) {
//        cin >> list2[i];
//    }

//    if (strictlyEqual(list1, list2, size)) {
//        cout << "The two lists are strictly identical." << endl;
//    } else {
//        cout << "The two lists are not strictly identical." << endl;
//    }
//p6
//    char input[1000];
//    cout << "Enter characters (terminate with '0'):" << endl;
//    cin.getline(input, 1000);
//    count_freq(input, 1000);

//p7
//    int size;
//    cout << "Enter the size of the array: ";
//    cin >> size;
//    int numbers[size];
//    cout<<"Enter "<< size << " numbers: ";
//    for (int i = 0; i < size; i++) {
//      cin >> numbers[i];
//    }
//    sort_arr(numbers, size);

//p9
//    int size;
//    cout << "Enter the size of the array: ";
//    cin >> size;
//    int numbers[size];
//    for (int i = 0; i < size; i++) {
//        cin>>numbers[i];
//    }
//    reverseArray(numbers, 0, size-1);
//    cout<<"Reversed array: "<< printArray(numbers, size) << endl;

//p10
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int numbers[size];
    for (int i = 0; i < size; i++) {
        cin>>numbers[i];
    }
    sorted_checker(numbers, size);




    return 0;
}

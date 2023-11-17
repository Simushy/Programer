#include <iostream>
#include <math.h>
#include <stdexcept>
using namespace std;

//* Napisz funkcję, która dla kolekcji danych liczbowych obliczy średnią
// arytmetyczną.
void task_1() {
  int table_size;
  cout << "Enter table size: ";
  cin >> table_size;
  table_size = table_size - 1;
  float *array = new float(table_size);
  float tmp = 0;
  int i;
  cout << "Enter table contents one by one:" << endl;
  for (i = 0; i <= table_size; i++) {
    cin >> array[i];
    tmp += array[i];
  }
  cout << "Arythmetic average is equal to: " << tmp / i << endl;
}

//* Napisz funkcję, która dla kolekcji danych liczbowych policzy ile jest liczb
// większych od średniej arytmetycznej.
void task_2() {
  int table_size;
  cout << "Enter table size: ";
  cin >> table_size;
  table_size = table_size - 1;
  float *array = new float(table_size);
  float tmp = 0;
  int i;
  int valid_values = 0;
  cout << "Enter table contents one by one:" << endl;
  for (i = 0; i <= table_size; i++) {
    cin >> array[i];
    tmp += array[i];
  }
  int average = tmp / i;
  for (i = 0; i <= table_size; i++) {
    if (array[i] > average)
      valid_values++;
  }
  cout << "Number of variables that meet the requirements: " << valid_values
       << endl;
}

//* Napisz funkcje, która dla kolekcji danych liczbowych przeniesie te liczby do
// innej kolekcji w odwrotnej kolejności.
void task_3() {
  int table_size;
  cout << "Enter table size: ";
  cin >> table_size;
  table_size = table_size - 1;
  float *array = new float(table_size);
  float *array_reverse = new float(table_size);
  int i;
  cout << "Enter table contents one by one:" << endl;
  for (i = 0; i <= table_size; i++) {
    cin >> array[i];
  }
  for (int j = 0, i = table_size; j <= table_size; j++, i--) {
    array_reverse[j] = array[i];
  }
  for (i = 0; i <= table_size; i++) {
    cout << array_reverse[i] << endl;
  }
}

//* Napisz funkcje, która dla kolekcji danych liczbowych obliczy częstotliwość
// występowania danej liczby.
void task_4() {
  int non_number = 0;
  int numbers_count[10] = {0};
  string user_input;
  cout << "Enter string of numbers: ";
  cin >> user_input;
  const int max_length = user_input.length();
  for (int i = 0; i < max_length; i++) {
    switch (user_input[i]) {
    case '0':
      numbers_count[0]++;
      break;
    case '1':
      numbers_count[1]++;
      break;
    case '2':
      numbers_count[2]++;
      break;
    case '3':
      numbers_count[3]++;
      break;
    case '4':
      numbers_count[4]++;
      break;
    case '5':
      numbers_count[5]++;
      break;
    case '6':
      numbers_count[6]++;
      break;
    case '7':
      numbers_count[7]++;
      break;
    case '8':
      numbers_count[8]++;
      break;
    case '9':
      numbers_count[9]++;
      break;
    default:
      non_number++;
    }
  }
  cout << "In " << user_input << " string there were:\n";
  cout << non_number << " characters that were not numbers\n";
  cout << numbers_count[0] << " 0's\n";
  cout << numbers_count[1] << " 1's\n";
  cout << numbers_count[2] << " 2's\n";
  cout << numbers_count[3] << " 3's\n";
  cout << numbers_count[4] << " 4's\n";
  cout << numbers_count[5] << " 5's\n";
  cout << numbers_count[6] << " 6's\n";
  cout << numbers_count[7] << " 7's\n";
  cout << numbers_count[8] << " 8's\n";
  cout << numbers_count[9] << " 9's\n";
}

//* Napisz funkcję, która dla kolekcji danych liczbowych znajdzie
// najdłuższy
// rosnący podciąg.
void task_5() {
  // nie wiem czy o to chodzilo, jak cos to wytlumacze
  string whole_string;
  string substring;
  cout << "Enter whole string: ";
  cin >> whole_string;
  cout << "Enter substring: ";
  cin >> substring;
  int longest = 0;

  for (int i = 0; i < whole_string.length(); i++) {
    int tmp = 0;
    for (int j = 0;
         (j < substring.length()) && (whole_string[i + j] == substring[j]);
         j++) {
      tmp++;
    }

    if (longest < tmp)
      longest = tmp;
  }
  cout << "The longest substring for" << whole_string << " and " << substring
       << " is " << longest << endl;
}

//* Napisz funkcję, która dla kolekcji danych liczbowych przeniesie te
// liczby do
// osobnych kolekcji liczb parzystych i nieparzystych.
void task_6() {
  string user_input;
  cout << "Enter string of numbers: ";
  cin >> user_input;
  int even = 0;
  int odd = 0;
  int non_number = 0;
  // ascii -48
  for (int i = 0; i < user_input.length(); i++) {
    if (user_input[i] - 48 < 0 || user_input[i] - 48 > 9)
      non_number++;
    else {
      if ((user_input[i] - 48) % 2 == 0)
        even++;
      else
        odd++;
    }
  }
  int *even_arr = new int(even);
  int *odd_arr = new int(odd);
  int even_index = 0;
  int odd_index = 0;
  for (int i = 0; i < user_input.length(); i++) {
    if (user_input[i] - 48 < 0 || user_input[i] - 48 > 9)
      non_number++;
    else {
      if ((user_input[i] - 48) % 2 == 0) {
        even_arr[even_index] = user_input[i] - 48;
        even_index++;

      } else if ((user_input[i] - 48) % 2 == 1) {
        odd_arr[odd_index] = user_input[i] - 48;
        odd_index++;
      }
    }
  }
  cout << "Skipped " << non_number << " non-numbers\n";
  cout << "There were " << even << " even numbers:\n";
  for (int i = 0; i < even; i++)
    cout << even_arr[i] << ", ";
  cout << endl;
  cout << "There were " << odd << " odd numbers:\n";
  for (int i = 0; i < odd; i++)
    cout << odd_arr[i] << ", ";
  cout << endl;
}
int main() {
  cout << "Enter task number:";
  int task;
  cin >> task;
  switch (task) {
  case 1:
    task_1();
    break;
  case 2:
    task_2();
    break;
  case 3:
    task_3();
    break;
  case 4:
    task_4();
    break;
  case 5:
    task_5();
    break;
  case 6:
    task_6();
    break;
  }
}

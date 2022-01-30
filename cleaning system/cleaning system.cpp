#include <iostream>
using namespace std;

char bar(int n) {
    int res;
    switch (n) {
    case 0: res = 48;
        return res;
    case 1: res = 49;
        return res;
    case 2: res = 50;
        return res;
    case 3: res = 51;
        return res;
    case 4: res = 52;
        return res;
    case 5: res = 53;
        return res;
    case 6: res = 54;
        return res;
    case 7: res = 55;
        return res;
    case 8: res = 56;
        return res;
    case 9: res = 57;
        return res;
    case 10: res = 65;
        return res;
    case 11: res = 66;
        return res;
    case 12: res = 67;
        return res;
    case 13: res = 68;
        return res;
    case 14: res = 69;
        return res;
    case 15: res = 70;
        return res;
    case 16: res = 71;
        return res;
    case 17: res = 72;
        return res;
    case 18: res = 73;
        return res;
    case 19: res = 74;
        return res;
    case 20: res = 75;
        return res;
    case 21: res = 76;
        return res;
    case 22: res = 77;
        return res;
    case 23: res = 78;
        return res;
    case 24: res = 79;
        return res;
    case 25: res = 80;
        return res;
    case 26: res = 81;
        return res;
    case 27: res = 82;
        return res;
    case 28: res = 83;
        return res;
    case 29: res = 84;
        return res;
    case 30: res = 85;
        return res;
    case 31: res = 86;
        return res;
    case 32: res = 87;
        return res;
    case 33: res = 88;
        return res;
    case 34: res = 89;
        return res;
    case 35: res = 90;
        return res;
    }


}


void revers(char arr[], int t) {


    int size = t;
    const int size2 = 32;
    char arr2[size2];
    for (int i = 0; i < size; i++, t--) {
        arr2[i] = arr[t - 1];

    }

    for (int i = 0; i < size; i++) {
        arr[i] = arr2[i];
    }
}


int sc(char arr[], int size, int number, int sys) {

    int i = 0, t = 0, buf = number, sim;
    while (buf != 0) {

        sim = buf % sys;
        arr[i] = bar(sim);
        buf = buf / sys;
        i++;
        t++;
    }



    revers(arr, t);

    return t;
}

void print(char arr[], int count, int number, int sys) {


    cout << "Число " << number << " в " << sys << " системе счисления: ";
    for (int i = 0; i < count; i++) {
        cout << arr[i];
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "ru");

    const int size = 32;
    char arr[size];
    int number, sys, count;
    cout << "Введите число: ";
    cin >> number;
    cout << "Введите систему счисления: ";
    cin >> sys;

    count = sc(arr, size, number, sys);

    print(arr, count, number, sys);



}

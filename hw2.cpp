#include <iostream>
#include <ctime>
#include <algorithm>
#include <iterator>
#include "all.h"

int main()

{
   using namespace std;

    int a;
    std::cout << "Enter a number of the task: ";
    std::cin >> a;

   switch (a) {
        case 1: {
            first();
            break;
        }
        case 2: {
            second();
            break;
        }
        case 3: {
            third();
            break;
        }
        case 4: {
            fourth();
            break;
        }
        case 6: {
            sixth();
            break;
        }
        case 7: {
            seven();
            break;
        }
        case 8: {
            eighth();
            break;
        }
        case 9: {
            nine();
            break;
        }
        case 10: {
            tenth();
            break;
        }
        case 11: {
            eleven();
            break;
        }
        case 12: {
            twelve();
            break;
        }
        case 14: {
            fourteenth();
            break;
        }
        case 15: {
            fifteenth();
            break;
        }
    }
    return 0;
}

void first(){
    int a[100]; 
    int n; 
    std::cout << "An amount of numbers in the array: "; 
    std::cin >> n; 
    std::cout << "Array: ";
    for (int i=0; i<n; i++){
        std::cin >> a[i];
    void swap (int *a, int *b){
        int t = *a;
        *a = *b;
        *b = t;
    }
}

void second(){
    int n;
    std::cout << std::endl << "Enter a length of the array: ";
    std::cin >> n;
    int a[100];
    std::cout << std::endl << "Enter an array: ";
    for (int i=0; i<n; i++){
        std::cin >> a[i];
    }
    int *p = &a[0];
    int *pl = &a[n-1];
    int x = a[n-1];
    *pl = *p;
    *p = x;
    std::cout << std::endl;
    for (int i=0;i<n;i++){
        std::cout << a[i] << " ";
    }
}

void third(){
double **p = 0;
   *( *( p = new double* ) = new double ) = 2;
   std::cout << **p << std::endl;
   delete *p;
   delete p;
}

void fourth(){
    int n = 12;
    double t =0.0;
    double a[12];
    std::cout << "Enter an array: ";
    for (int i =0; i<n; i++){
        std::cin >> a[i];
    }
    int k=0;
    for (int i =1; i<n; i++){
        for (int j=0; j<n-i; j++){
            if (a[j] < a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
                k++;
            }
        }
    }
    for (int i=0; i<n; i++)
        std::cout << a[i] << " ";
    std::cout << std::endl << k;
}

void sixth(){
    int n = 14;
    int a[14];
    std::cout << "Enter an array: ";
    for (int i=0;i<n;i++) {
        std::cin >> a[i];
    }
    for (int i=0; i<n/2; i++){
        int t = a[i];
        a[i] = a[i+n/2];
        a[i+n/2] = t;
    }
    std::cout << "Reverse an array: ";
    for (int i=0; i<n; i++){
        std::cout << a[i] << " ";
    }

    std::cout << "Enter an amount of changes: " << n/2;

}

void seven(){
    setlocale (LC_ALL, ""); //Функция setlocale задает локаль, которая будет использоваться текущей программой.
//Эта функция также может быть использована для получения имени текущей локали, передав NULL
    const int size = 10;
    int n[size], count = 0;
    srand (unsigned(time(NULL)));

for (int i = 0; i < size; i++)
    {
        n[i] = rand() % 99 + 1;
        std::cout << n[i] << " ";
    }
    std::cout << std::endl;

for (int i = 0; i < size; i++)
    {
    if (i == 0 && n[i] < n[i+1]) count++;
        else if (i > 0 && i < size-1 && n[i] < n[i-1] && n[i] < n[i+1]) count++;
        else if (i == size-1 && n[i] < n[i-1]) count++;
    }
    std::cout << "An amount of local minimum: " << count << std::endl;
    
    return 0;
}

void eighth(){
    int n,m;
    std::cout << std::endl << "Enter a length of matrix: ";
    std::cin >> n >> m;
    int a[100][100];
    std::cout << std::endl << "Enter an array: ";
    for (int i=0; i<n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    int sum,flag=0;
    for (int i=0;i<n;i++) {
        sum=0;
        flag=0;
        for (int j = 0; j < m; j++) {
            if (flag == 1 && a[i][j]!= 0){
                sum = sum+a[i][j];
            }
            else if (a[i][j] == 0)
                ++flag;
        }
        std::cout << sum << " ";
    }

}


void nine(){
int size = 15;
    int* array = new int[size]();
    std::cout << std::endl << "enter 15 numbers " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> array[i];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int* p1 = &array[j];
                int* p2 = &array[j + 1];
                _swap (p1, p2);
                
            }
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] >= 0 && array[j + 1] >= 0 && array[j] < array[j + 1]) {
                int* p1 = &array[j];
                int* p2 = &array[j + 1];
                _swap (p1, p2);
            }
        }
    }
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}

void tenth(){
    int n,m;
    std::cout << "Enter a length of array: ";
    std::cin >> n >> m;
    double a[100], b[100];
    double max1 = a[0], max2 =b[0];
    int k1 = 0, k2 = 0;
    std::cout << std::endl << "Enter the first array: ";
    for (int i=0;i<n;i++){
        std::cin >> a[i];
        if (a[i] > max1) {
            max1 = a[i];
            k1 = i;
        }
    }
    std::cout << std::endl << "Enter the second array: ";
    for (int i=0; i<m; i++){
        std::cin >> b[i];
        if (b[i] > max2) {
            max2 = b[i];
            k2=i;
        }
    }
    a[k1] = max2;
    b[k2] = max1;
    for (int i=0; i<n; i++)
        std::cout << a[i] << " ";
    std::cout<<std::endl;
    for (int i=0; i<m; i++)
        std::cout << b[i] << " ";

}

void eleven(){
std::cout  << "Enter the lines of your array: " << std::endl;
    int lines = 0;
    std::cin >> lines;

    std::cout << "Enter the columns of your array: " << std::endl;
    int columns = 0;
    std::cin >> columns;

    int** array = new int* [lines];
    for (int i = 0; i < lines; i++) {
        array[i] = new int[columns];
        }
    //заполняем массив
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < columns; j++) {
            std::cin >> array[i][j];
           
        }
     }
    std::cout << "Enter an array: " << std::endl;
    for (int i = 0; i < lines; i++)
    {
        std::cout << std::endl;
        for (int j = 0; j < columns; j++) {
            std::cout << array[i][j] << " ";

        }
    }
    
    int t;
    for (int i = 0; i < lines; ++i) {
        t = array[i][columns - 1];
        for (int j = columns - 1; j > 0; --j)
            array[i][j] = array[i][j - 1];
            array[i][0] = t;
}
    
    std::cout <<std::endl << "Enter new array: " << std::endl;
    for (int i = 0; i < lines; i++) {
std::cout << std::endl;
        for (int j = 0; j < columns; j++) {
            std::cout << array[i][j] << " ";

        }
    }
}

void twelve(){
    int n,m;
    std::cout << std::endl << "Enter the length of matrix: ";
    std::cin >> n >> m;
    int a[100][100];
    std::cout << std::endl << "Enter an array: ";
    for (int i=0; i<n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    int maxsum = a[0][0];
    int minsum = 100000000000;
    int sum;
    for (int i=0;i<n;i++){
        sum=0;
        for (int j=0; j<m; j++){
            sum = sum + a[i][j];
        }
        if (sum > maxsum) {
            maxsum = sum;
        }
        if (sum < minsum) {
            minsum = sum;
        }
    }
    std::cout<<maxsum<<" "<<minsum;
}

void fourteen(){
    int n;
    int a[100];
    std::cout << std::endl << "Enter the length of array: ";
    std::cin >> n;
    std::cout << std::endl << "Enter an array: ";
    for (int i=0;i<n;i++)
        std::cin >> a[i];
    int max = 0;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            int p= a[j]-a[i];
            if (max<p)
                max = p;
        }
    }
    std::cout << max;
}

void fifteen(){
    int n;
    std::cout << "Enter the level of pascals' triangle: ";
    std::cin >> n;
    int a[100];
    for (int i=0; i<n; i++){
        a[i] = 0;
        a[0] = 1;
    }
    for (int i=0; i<n; i++){
        for (int j=i; j>0; j--){
            a[j] = a[j-1]+a[j];
        }
    }
    for (int i=0; i<n; i++){
        std::cout << a[i];
    }
}
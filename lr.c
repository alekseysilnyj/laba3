#include "lr.h"
#include <stdio.h>

int lr1()
{
    /* Из пункта А в пункт Б, расстояние между которыми L км, одновременно
вышли два пешехода. Первый двигался со скоростью 1
v км/час. Какова
скорость второго, если они встретились через t часов?
*/
    double L, V1, V2, t; // расстояние между пунктами, скорость первого, искомая скорость второго, время
    printf("L = "); // вывод на экран
    scanf("%lf", &L ); // ввод значения
    printf("V1 = ");
    scanf("%lf", &V1 );
    printf("t = ");
    scanf("%lf", &t );
    V2=L / t - V1; // решение задачи
    printf("V2 = %lf\n", V2); // вывод на экран искомой скорости второго пешехода
    return 0; // возвращение программы
}
double foo()
{
    double L, V1, V2, t;
    printf("L="); // вывод на экран
    scanf("%lf", &L); // ввод значения
    printf("V1=");
    scanf("%lf", &V1);
    printf("t=");
    scanf("%lf", &t);
    V2 = L / t - V1; // решение задачи
    return V2;
}
int lr11()
{
    printf("%lf\n", foo());// вызов функции и вывод изскомой скорости
    return 0;
}




double doo(double x, int n); // Прототип функции doo
int lr2()
{
  double x; // Это переменная для x
  int n; // Это переменная для n
  printf("x="); // Просим пользователя ввести x
  scanf("%lf", &x); // Считываем x с клавиатуры
  printf("n="); //
  scanf("%d", &n); // Считываем n с клавиатуры
  printf("s= %f\n", doo(x, n)); //  суммa ряда
  return 0; // Заканчиваем программу

}
double doo(double x, int n){
  double s;
  double c;
  double a;
  int sign;
  int i;
  s = 0;
  sign = 1;
  i = 1; // номер очередного элмента
  c = x;
  while (i <= n) { // Этот цикл повторяется пока i не превысит n
    a = c / i;
    s = s + sign * a; // Каждый раз прибавляем к сумме слагаемое
    sign = sign * (-1); // Каждый раз меняем знак на противоположный
    c = c * x; // Каждый раз умножаем степень числа на x
    i=i+1; // Каждый раз увеличиваем i на 1
  }
  return s; // Возвращаем сумму
}




double dox(double x, int n) {
  double s;
  double c;
  double a;
  int sign;
  int i;
  s = 0;
  sign = 1;
  c = x;
  for (i=1; i <= n; i++) {
    a = c / i;
    s = s + sign * a; // Каждый раз прибавляем к сумме слагаемое
    sign = sign * (-1); // Каждый раз меняем знак на противоположный
    c = c * x; // Каждый раз умножаем степень числа на x
  }
  return s; // Возвращаем сумму
}

int lr22() {
  double x; // Это переменная для x
  int n; // Это переменная для n
  printf("x="); // Просим пользователя ввести x
  scanf("%lf", &x); // Считываем x с клавиатуры
  printf("n="); //
  scanf("%d", &n); // Считываем n с клавиатуры
  printf("s= %f\n", dox(x, n)); //  суммa ряда
  return 0; // Заканчиваем программу
}

int lr3()
{
    int c, N, cnt, l, a; // текущ символ, кол-во букв, счетчик, длина слова
    cnt = 0;
    a=0;
    l = 0;
    printf("Vvedite znachenie N:");
    scanf("%d", &N);
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n') {
            a=0;
        }
        else{a++;}

        if(a!=0){
            if (a > N) {
                    if(c != 'a' || c != 'e' || c != 'i' ||  c != 'o' || c != 'u' ||  c != 'y' || c != 'A' || c != 'E' || c != 'I' ||  c != 'O' || c != 'U' || c != 'Y')
            {
               l=1;
            }
            else
                {
                l=0;
                }

            }

        }
        if(l==1)
        {
            if(a==0)
            {
                cnt++;
            }
        }



    printf("Kolichestvo slov = %d\n", cnt);
    return 0;
}
}
int lr33() {
    int c, N, cnt, l; // текущ символ, кол-во букв, счетчик, длина слова
    cnt = 0;
    l = 0;
    printf("Vvedite znachenie N:");
    scanf("%d", &N);
    while ((c = getchar()) != EOF) {
        if (c == ' '  || c == '\n') {
            if (l > N) {
                cnt++;
            }
            l = 0;
        } else {
            if(c != 'a' && c != 'e' && c != 'i' &&  c != 'o' && c != 'u' &&  c != 'y' && c != 'A' && c != 'E' && c != 'I' &&  c != 'O' && c != 'U' && c != 'Y'  ){
            l++;
            }
        }
    }

    printf("Kolichestvo slov = %d\n", cnt);
    return 0;
}

int lr4(){
    char str[1000];  // создаем массив символов для хранения строки
    int i = 0;
    int c = 0;
    printf("Enter your text: ");
    for(i = c = 0;(c = getchar()) != EOF && i < 1000; i++) // читаем символы до тех пор, пока не встретим символ новой строки или не превысим лимит в 100 символов и присвавиваем каждома символу
        str[i] = c;
    for(i = c = 0; str[i] != '\0' && i < 100;)// цикл удаление лишних символов
    {
        // Если встретили пробел, копируем один пробел и пропускаем все последующие пробелы
        if(str[i] == ' '){
            str[c++] = ' ';// перебор символов
            while(str[i] == ' ' ){
            i++;
            }
        }
        else{
            str[c++] = str[i++];    // kопируем символы, которые не являются пробелами
        }
    }
str[c] = '\0';
    printf("Your line:%s\n", str);
}



int lr44(){

    char str[1000];  // создаем массив символов для хранения строки
    int i = 0;
    int c = 0;
    printf("Enter your text: ");
    for(i = c = 0;(c = getchar()) != EOF && i < 1000; i++) // читаем символы до тех пор, пока не встретим символ новой строки или не превысим лимит в 100 символов и присвавиваем каждома символу
        str[i] = c;
    for(i = c = 0; str[i] != '\0' && i < 100;)// цикл удаление лишних символов
    {
        // Если встретили пробел, копируем один пробел и пропускаем все последующие пробелы
        if(str[i] == ' '){
            str[c++] = '\n';// перебор символов
            while(str[++i] == ' ' ){
            }

        }
        else{
            str[c++] = str[i++];    // kопируем символы, которые не являются пробелами
        }

    }

str[c] = '\0';
    printf("Your line:%s\n", str);
    return 0;
}
#define N 10

int lr5( void )
{
int x[N]; // массив из N элементов
float aver; // среднее арифметическое
int i;
// ввод массива

for( i = 0;  i < N; i++ )
 scanf("%d", &x[i]);
// вычисление среднего арифметического значения
aver = 0;
for( i = 0; i < N; i++ )
 aver = aver + x[i];
aver = aver / N;
// выборочное обнуление элементов
for( i = 0; i < N; i++ )
 {
 if( x[i] < aver )
 x[i] = 0;
 }
// вывод массива
for( i = 0; i < N; i++ )
 printf("%d ", x[i]);

}


float calc(int *x){
    float aver;
    // вычисление среднего арифметического значения
    aver = 0;
for(int i = 0; i < N; i++ )
 aver = aver + x[i];
aver = aver / N;
return aver;
}
int *foo2(int *x, float aver){
    // выборочное обнуление элементов
    for( int i = 0; i < N; i++ )
 {
 if( x[i] < aver )
 x[i] = 0;
 }
 return x;
}
int lr55( void )
{

int x[N]; // массив из N элементов
float aver; // среднее арифметическое
for( int i = 0; i < N; i++ )
 scanf("%d", &x[i]);
aver=calc(x);
// ввод массива
int *z=foo2(x, aver);

// вывод массива
for( int i = 0; i < N; i++ )
 printf("%d ", z[i]);
return 0;
}
#define K 3
#define N 4
int lr6(void) {
    int x[K][N]; // массив из K на N элементов
    int sum = 0; // сумма элементов
    int i, j;
    int obnulyashka= 0;
    // ввод массива и вычисление среднего арифметического значения
    for (i = 0; i < K; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &x[i][j]); // ввод элемента массива
            sum += x[i][j]; // накапливаем сумму элементов
        }
    }

    // выборочное обнуление элементов

    for (i = 0; i < K; i++) {
        int row_sum = 0; // сумма элементов в текущей строке
        for (j = 0; j < N; j++) {
            row_sum += x[i][j]; // накапливаем сумму элементов в строке
        }
        if (row_sum < sum) {
            sum = row_sum; // обновляем минимальную сумму
            obnulyashka = i;
        }
    }

    for (j = 0; j < N; j++) {
        x[obnulyashka][j] = 0; // обнуляем элементы в строке с минимальной суммой
    }

    // вывод массива
    for (i = 0; i < K; i++) {
        for (j = 0; j < N; j++) {
            printf("%4d ", x[i][j]); // вывод элемента массива
        }
        printf("\n");
    }

    return 0;
}
int lr66(void) {
    int x[K][N];
    int sum = 0; // сумма элементов
    int i, j;
    int obnulyashka= 0;
    int sum_main=0;
    int sum_second=0;
    // ввод массива и вычисление среднего арифметического значения
    for (i = 0; i < K; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &x[i][j]); // ввод элемента массива
            sum += x[i][j]; // накапливаем сумму элементов
                if (i==j) {
                sum_main += x[i][j];
                }
                if(i+j==K-1){
                sum_second += x[i][j];
                }

    }
    }
    printf("main:%d\n", sum_main );
    printf("second:%d\n", sum_second);

    // выборочное обнуление элементов

    for (i = 0; i < K; i++) {
        int row_sum = 0; // сумма элементов в текущей строке
        for (j = 0; j < N; j++) {
            row_sum += x[i][j]; // накапливаем сумму элементов в строке
        }
        if (row_sum < sum) {
            sum = row_sum; // обновляем минимальную сумму
            obnulyashka = i;
        }
    }

    for (j = 0; j < N; j++) {
        x[obnulyashka][j] = 0; // обнуляем элементы в строке с минимальной суммой
    }

    // вывод массива
    for (i = 0; i < K; i++) {
        for (j = 0; j < N; j++) {
            printf("%4d ", x[i][j]); // вывод элемента массива
        }
        printf("\n");
    }
    return 0;
}


int lr7(){
    unsigned int x;
    printf("chislo: ");
    scanf("%d", &x);
    if(x==0){
        printf("Netu bitov.");
    } else {
        int p=0;
        while ((x & 1) == 0) {
            x >>= 1;
            p++;
        }
        printf("position: %d", p);
    }
    return 0;
}





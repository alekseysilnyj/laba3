#include "lr.h"
#include <stdio.h>

int lr1()
{
    /* �� ������ � � ����� �, ���������� ����� �������� L ��, ������������
����� ��� ��������. ������ �������� �� ��������� 1
v ��/���. ������
�������� �������, ���� ��� ����������� ����� t �����?
*/
    double L, V1, V2, t; // ���������� ����� ��������, �������� �������, ������� �������� �������, �����
    printf("L = "); // ����� �� �����
    scanf("%lf", &L ); // ���� ��������
    printf("V1 = ");
    scanf("%lf", &V1 );
    printf("t = ");
    scanf("%lf", &t );
    V2=L / t - V1; // ������� ������
    printf("V2 = %lf\n", V2); // ����� �� ����� ������� �������� ������� ��������
    return 0; // ����������� ���������
}
double foo()
{
    double L, V1, V2, t;
    printf("L="); // ����� �� �����
    scanf("%lf", &L); // ���� ��������
    printf("V1=");
    scanf("%lf", &V1);
    printf("t=");
    scanf("%lf", &t);
    V2 = L / t - V1; // ������� ������
    return V2;
}
int lr11()
{
    printf("%lf\n", foo());// ����� ������� � ����� �������� ��������
    return 0;
}




double doo(double x, int n); // �������� ������� doo
int lr2()
{
  double x; // ��� ���������� ��� x
  int n; // ��� ���������� ��� n
  printf("x="); // ������ ������������ ������ x
  scanf("%lf", &x); // ��������� x � ����������
  printf("n="); //
  scanf("%d", &n); // ��������� n � ����������
  printf("s= %f\n", doo(x, n)); //  ����a ����
  return 0; // ����������� ���������

}
double doo(double x, int n){
  double s;
  double c;
  double a;
  int sign;
  int i;
  s = 0;
  sign = 1;
  i = 1; // ����� ���������� �������
  c = x;
  while (i <= n) { // ���� ���� ����������� ���� i �� �������� n
    a = c / i;
    s = s + sign * a; // ������ ��� ���������� � ����� ���������
    sign = sign * (-1); // ������ ��� ������ ���� �� ���������������
    c = c * x; // ������ ��� �������� ������� ����� �� x
    i=i+1; // ������ ��� ����������� i �� 1
  }
  return s; // ���������� �����
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
    s = s + sign * a; // ������ ��� ���������� � ����� ���������
    sign = sign * (-1); // ������ ��� ������ ���� �� ���������������
    c = c * x; // ������ ��� �������� ������� ����� �� x
  }
  return s; // ���������� �����
}

int lr22() {
  double x; // ��� ���������� ��� x
  int n; // ��� ���������� ��� n
  printf("x="); // ������ ������������ ������ x
  scanf("%lf", &x); // ��������� x � ����������
  printf("n="); //
  scanf("%d", &n); // ��������� n � ����������
  printf("s= %f\n", dox(x, n)); //  ����a ����
  return 0; // ����������� ���������
}

int lr3()
{
    int c, N, cnt, l, a; // ����� ������, ���-�� ����, �������, ����� �����
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
    int c, N, cnt, l; // ����� ������, ���-�� ����, �������, ����� �����
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
    char str[1000];  // ������� ������ �������� ��� �������� ������
    int i = 0;
    int c = 0;
    printf("Enter your text: ");
    for(i = c = 0;(c = getchar()) != EOF && i < 1000; i++) // ������ ������� �� ��� ���, ���� �� �������� ������ ����� ������ ��� �� �������� ����� � 100 �������� � ������������ ������� �������
        str[i] = c;
    for(i = c = 0; str[i] != '\0' && i < 100;)// ���� �������� ������ ��������
    {
        // ���� ��������� ������, �������� ���� ������ � ���������� ��� ����������� �������
        if(str[i] == ' '){
            str[c++] = ' ';// ������� ��������
            while(str[i] == ' ' ){
            i++;
            }
        }
        else{
            str[c++] = str[i++];    // k������� �������, ������� �� �������� ���������
        }
    }
str[c] = '\0';
    printf("Your line:%s\n", str);
}



int lr44(){

    char str[1000];  // ������� ������ �������� ��� �������� ������
    int i = 0;
    int c = 0;
    printf("Enter your text: ");
    for(i = c = 0;(c = getchar()) != EOF && i < 1000; i++) // ������ ������� �� ��� ���, ���� �� �������� ������ ����� ������ ��� �� �������� ����� � 100 �������� � ������������ ������� �������
        str[i] = c;
    for(i = c = 0; str[i] != '\0' && i < 100;)// ���� �������� ������ ��������
    {
        // ���� ��������� ������, �������� ���� ������ � ���������� ��� ����������� �������
        if(str[i] == ' '){
            str[c++] = '\n';// ������� ��������
            while(str[++i] == ' ' ){
            }

        }
        else{
            str[c++] = str[i++];    // k������� �������, ������� �� �������� ���������
        }

    }

str[c] = '\0';
    printf("Your line:%s\n", str);
    return 0;
}
#define N 10

int lr5( void )
{
int x[N]; // ������ �� N ���������
float aver; // ������� ��������������
int i;
// ���� �������

for( i = 0;  i < N; i++ )
 scanf("%d", &x[i]);
// ���������� �������� ��������������� ��������
aver = 0;
for( i = 0; i < N; i++ )
 aver = aver + x[i];
aver = aver / N;
// ���������� ��������� ���������
for( i = 0; i < N; i++ )
 {
 if( x[i] < aver )
 x[i] = 0;
 }
// ����� �������
for( i = 0; i < N; i++ )
 printf("%d ", x[i]);

}


float calc(int *x){
    float aver;
    // ���������� �������� ��������������� ��������
    aver = 0;
for(int i = 0; i < N; i++ )
 aver = aver + x[i];
aver = aver / N;
return aver;
}
int *foo2(int *x, float aver){
    // ���������� ��������� ���������
    for( int i = 0; i < N; i++ )
 {
 if( x[i] < aver )
 x[i] = 0;
 }
 return x;
}
int lr55( void )
{

int x[N]; // ������ �� N ���������
float aver; // ������� ��������������
for( int i = 0; i < N; i++ )
 scanf("%d", &x[i]);
aver=calc(x);
// ���� �������
int *z=foo2(x, aver);

// ����� �������
for( int i = 0; i < N; i++ )
 printf("%d ", z[i]);
return 0;
}
#define K 3
#define N 4
int lr6(void) {
    int x[K][N]; // ������ �� K �� N ���������
    int sum = 0; // ����� ���������
    int i, j;
    int obnulyashka= 0;
    // ���� ������� � ���������� �������� ��������������� ��������
    for (i = 0; i < K; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &x[i][j]); // ���� �������� �������
            sum += x[i][j]; // ����������� ����� ���������
        }
    }

    // ���������� ��������� ���������

    for (i = 0; i < K; i++) {
        int row_sum = 0; // ����� ��������� � ������� ������
        for (j = 0; j < N; j++) {
            row_sum += x[i][j]; // ����������� ����� ��������� � ������
        }
        if (row_sum < sum) {
            sum = row_sum; // ��������� ����������� �����
            obnulyashka = i;
        }
    }

    for (j = 0; j < N; j++) {
        x[obnulyashka][j] = 0; // �������� �������� � ������ � ����������� ������
    }

    // ����� �������
    for (i = 0; i < K; i++) {
        for (j = 0; j < N; j++) {
            printf("%4d ", x[i][j]); // ����� �������� �������
        }
        printf("\n");
    }

    return 0;
}
int lr66(void) {
    int x[K][N];
    int sum = 0; // ����� ���������
    int i, j;
    int obnulyashka= 0;
    int sum_main=0;
    int sum_second=0;
    // ���� ������� � ���������� �������� ��������������� ��������
    for (i = 0; i < K; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &x[i][j]); // ���� �������� �������
            sum += x[i][j]; // ����������� ����� ���������
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

    // ���������� ��������� ���������

    for (i = 0; i < K; i++) {
        int row_sum = 0; // ����� ��������� � ������� ������
        for (j = 0; j < N; j++) {
            row_sum += x[i][j]; // ����������� ����� ��������� � ������
        }
        if (row_sum < sum) {
            sum = row_sum; // ��������� ����������� �����
            obnulyashka = i;
        }
    }

    for (j = 0; j < N; j++) {
        x[obnulyashka][j] = 0; // �������� �������� � ������ � ����������� ������
    }

    // ����� �������
    for (i = 0; i < K; i++) {
        for (j = 0; j < N; j++) {
            printf("%4d ", x[i][j]); // ����� �������� �������
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





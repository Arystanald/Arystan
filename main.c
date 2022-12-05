/*1 Даны целые числа K и N (N > 0). Вывести N раз число K.
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int K,N;
    printf("K,N: ");
    scanf("%d %d", &K, &N);
    for(int i=0; i<N; i++)
    {
        printf("%d", K);


    }
}
*/

/*2 Даны два целых числа A и B (A < B). Вывести в порядке возрастания все
целые числа, расположенные между A и B (включая сами числа A и B), а
также количество N этих чисел.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A,B;

    printf("A,B: ");
    scanf("%d %d", &A, &B);

    int n=0;
    for(int i=A; i<=B; i++)
    {
        printf("%d ", i);
        n++;
    }

    printf("\n%d",n );

    return 0;
}
*/

/*3 Даны два целых числа A и B (A < B). Вывести в порядке убывания все
целые числа, расположенные между A и B (не включая числа A и B), а
также количество N этих чисел.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A,B;

    printf("A,B: ");
    scanf("%d %d", &A, &B);

    int n=0;
    for(int i=B-1; i>A; i--)
    {
        printf("%d ", i);
        n++;
    }

    printf("\n%d", n);

    return 0;
}
*/

/*4 Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1,
2, . . . , 10 кг конфет.
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float A;

    printf("A: ");
    scanf("%f", &A);

    for(int i=1; i<=10; i++)
    {
        printf("%d %.2f\n", i, i*A);

    }

    return 0;
}
*/

/*5 Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1,
0.2, . . . , 1 кг конфет.
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float A;

    printf("A: ");
    scanf("%f", &A);


    float m=0.1;
    for(int i=1; i<=10; i++)
    {
        printf("%.2f %.2f\n", m, m*A);
        m+=0.1;
    }

    return 0;
}
*/

/*6 Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1.2,
1.4, . . . , 2 кг конфет.
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float A;

    printf("A: ");
    scanf("%f", &A);


    float m=1.2;
    for(int i=1; i<=5; i++)
    {
        printf("%.2f %.2f\n", m, m*A);
        m+=0.2;
    }
    return 0;
}

*/
/*7 Даны два целых числа A и B (A < B). Найти сумму всех целых чисел
от A до B включительно.
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A,B;

    printf("A,B: ");
    scanf("%d %d", &A, &B);

    float s=0;

    for(int i=A; i<=B; i++)
    {
        printf("%d ", i);
        s+=i;
    }

    printf("%f ", s);
    return 0;
}
*/

/*8. Даны два целых числа A и B (A < B). Найти произведение всех целых
чисел от A до B включительно.
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A,B;

    printf("A,B: ");
    scanf("%d %d", &A, &B);

    float s=1;

    for(int i=A; i<=B; i++)
    {
        printf("%d ", i);
        s*=i;
    }

    printf("%f ", s);
    return 0;
}
*/

/*9 Даны два целых числа A и B (A < B). Найти сумму квадратов всех целых
чисел от A до B включительно.
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A,B;

    printf("A,B: ");
    scanf("%d %d", &A, &B);

    float s=0;

    for(int i=A; i<=B; i++)
    {
        //printf("%d ", i);
        printf("%d ", i*i);
        s+=i*i;
    }

    printf("%f ", s);
    return 0;
}
*/

/*14 Дано целое число N (> 0). Найти квадрат данного числа, используя для
его вычисления следующую формулу:
N^2 = 1 + 3 + 5 + . . . + (2·N − 1).
После добавления к сумме каждого слагаемого выводить текущее значение суммы
(в результате будут выведены квадраты всех целых чисел от 1 до N).
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;

    printf("N: ");
    scanf("%d", &N);

    float s=0;

    for(int i=1; i<=2*N-1; i+=2)
    {
        printf("%d ", i);
        s+=i;
    }

    printf("%f", s);

    return 0;
}
*/
/*15 Дано вещественное число A и целое число N (> 0). Найти A в степени N:
A^N = A·A· . . . ·A (числа A перемножаются N раз).
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float A;
    printf("A: ");
    scanf("%f", &A);
    int N;
    printf("N: ");
    scanf("%d", &N);
    float s=1;
    for(int i=0; i<N; i++)
    {

        s*=A;
    }
    printf("%f", s);
    return 0;
}
*/

/*16 Дано вещественное число A и целое число N (> 0). Используя один
цикл, вывести все целые степени числа A от 1 до N.
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float A;
    printf("A: ");
    scanf("%f", &A);
    int N;
    printf("N: ");
    scanf("%d", &N);
    float s=1;
    for(int i=1; i<=N; i++)
    {
        s*=A;
    }
    printf("%f", s);
    return 0;
}
*/

/*17 Дано вещественное число A и целое число N (> 0). Используя один
цикл, найти сумму 1 + A + A^2 + A^3 + . . . + A^N .
 #include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
 float A;
    printf("A: ");
    scanf("%f", &A);
    int N;
    printf("N: ");
    scanf("%d", &N);
    float s=1;
    float t=1;
    for (int i=2; i<=N; i++)
    {
        s*=A;
        t+=s;
    }
    printf("%f", t);
    return 0;
}

*/

/*18  Дано вещественное число A и целое число N (> 0). Используя один
цикл, найти значение выражения 1 − A + A^2 − A^3 + . . . + (−1)^N ·A^N .
Условный оператор не использовать.
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
 float A;
    printf("A: ");
    scanf("%f", &A);
    int N;
    printf("N: ");
    scanf("%d", &N);
    float s=1;
    float t=1;
    for (int i=2; i<=N; i++)
    {
        s*=-A;
        t+=s;
    }
    printf("%f", t);
    return 0;
}
*/

/*19 Дано целое число N (> 0). Найти произведение
N! = 1·2·. . .·N (N–факториал).
Чтобы избежать целочисленного переполнения,
вычислять это произведение с помощью вещественной переменной
и вывести его как вещественное число.   0 - 255  c=255; c+=1; c==0;
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("N: ");
    scanf("%d", &N);
    double s=1;

    for(int i=1; i<=N; i++)
    {
        s*=i;
    }

    printf("%lf", s);

    return 0;
}
*/

 /*20  Дано целое число N (> 0). Используя один цикл, найти сумму
1! + 2! + 3! + . . . + N!
Чтобы избежать целочисленного переполнения,
проводить вычисления с помощью вещественных переменных
и вывести результат как вещественное число.
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("N: ");
    scanf("%d", &N);
    double s=1;
    double t=0;

    for(int i=1; i<=N; i++)
    {
        s*=i;
        t+=s;
    }

    printf("%lf %lf", s, t);

    return 0;
}
*/

/*21 Дано целое число N (> 0). Используя один цикл, найти сумму
1 + 1/(1!) + 1/(2!) + 1/(3!) + . . . + 1/(N!)
Полученное число является приближенным значением константы e = exp(1).
1 1
1 2
1 6
1 24
1 120


#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("N: ");
    scanf("%d", &N);
    double s=1;
    double t=1;
    for(int i=1; i<=N; i++)
    {
        s*=i;
        //printf("%d %lf\n ", 1, s );
        t+=1/s;
    }
    printf("%lf", t);

    return 0;
}
*/

/*22 Дано вещественное число X и целое число N (> 0). Найти значение
выражения 1 + X + X^2/(2!) + . . . + X^N /(N!)
Полученное число является приближенным значением
функции exp в точке X.
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float X;
    printf("X: ");
    scanf("%f", &X);
    int N;
    printf("N: ");
    scanf("%d", &N);
    double s=1;
    double t=1;
    for(int i=1; i<=N; i++)
    {
        s*=X/i;
		t+=s;
    }
    printf("%lf", t);
    return 0;
}
*/


/*#include <math.h>
#include <stdio.h>

float ax(int x, float eps);

int main()
{
    int a, b, r;
    float eps;
    scanf("%d%d%d%f", &a, &b, &r, &eps);
    printf("\n_____________________\n");
    printf("x\ta\n_____________________\n");
    for (int x = a; x <= b; x += r)
    {
        if(x==0)
        {
            continue;
        }
        printf("%d\t", x);
        printf("|\t%f\n", ax(x, eps));
    }
    printf("_____________________\n");
    return 0;
}

float ax(int x, float eps)
{
    float sum = -x/2;
    float z;
    for (int k = 1; eps >= fabs(z); k++)
    {
        z = -x / (float)( (2*k + 3) * (2 * k + 2) );
        sum = sum + z;
    }
    return sum;
}
*/

/*1 Даны положительные числа A и B (A > B). На отрезке длины A
размещено максимально возможное количество отрезков длины B (без
наложений). Не используя операции умножения и деления, найти длину
незанятой части отрезка A.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int A;
    printf("A: ");
    scanf("%d", &A);
    int B;
    printf("B: ");
    scanf("%d", &B);
    while(A>=B)
    {
        A-=B;
    }
    printf("%d", A);
    return 0;
}
*/


/*2 Даны положительные числа A и B (A > B). На отрезке длины A
размещено максимально возможное количество отрезков длины B
(без наложений). Не используя операции умножения и деления,
найти количество отрезков B, размещенных на отрезке A.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int A;
    printf("A: ");
    scanf("%d", &A);
    int B;
    printf("B: ");
    scanf("%d", &B);
    int s=0;
    while(A>=B)
    {
        A-=B;
        s++;
    }
    printf("%d %d", B, s);
    return 0;
}
*/

/*3 Даны целые положительные числа N и K. Используя только операции
сложения и вычитания, найти частное от деления нацело N на K, а также
остаток от этого деления.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("N: ");
    scanf("%d", &N);
    int K;
    printf("K: ");
    scanf("%d", &K);
    int s=0;
    while(N>=K)
    {
        N-=K;
        s++;
    }
    printf("%d %d", N, s);
    return 0;
}
*/

/*4 Дано целое число N (> 0). Если оно является степенью числа 3, то
вывести TRUE, если не является — вывести FALSE.
//2129
//1 3 9 27 81 243 729 2187 6561 19683
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("N: ");
    scanf("%d", &N);
    int s=1;
    while(N>s)
    {
        s*=3;
    }
    if(N<s)
    {
        printf("false");
    }
    else
    {
        printf("true");
    }
    return 0;
}
*/

/*5 Дано целое число N (> 0), являющееся некоторой степенью числа 2:
N = 2^K. Найти целое число K — показатель этой степени.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("N: ");
    scanf("%d", &N);
    int k=0;
    while (N>=2)
    {
        ++k;
        N/=2;
    }
    printf("%d", k);
    return 0;
}
*/

/*6 Дано целое число N (> 0). Найти двойной факториал N:
N!! = N·(N−2)·(N−4)·. . .
(последний сомножитель равен 2, если N — четное, и 1, если N — нечетное).
Чтобы избежать целочисленного переполнения, вычислять это произведение
с помощью вещественной переменной и вывести его как вещественное число.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("N: ");
    scanf("%d", &N);
    float k=1;
    while (N>=2)
    {
        k*=N;
        N-=2;
    }
    printf("%f",k );
    return 0;
}
*/

/*7 Дано целое число N (> 0). Найти наименьшее целое положительное
число K, квадрат которого превосходит N: K^2 > N. Функцию извлечения
квадратного корня не использовать

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("N: ");
    scanf("%d", &N);
    int k=1;
    while (k*k<=N)
    {
        k++;
    }
    printf("%d", k);
    return 0;
}

.*/
/*8 Дано целое число N (> 0). Найти наибольшее целое число K, квадрат
которого не превосходит N: K^2 ≤ N. Функцию извлечения квадратного
корня не использовать.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("N: ");
    scanf("%d", &N);
    int k=1;
    while (k*k<=N)
    {
       k+=1;
    }
    printf("%d", k-1);
    return 0;
}
*/

/*9 Дано целое число N (> 1). Найти наименьшее целое число K, при
котором выполняется неравенство 3^K > N.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("N: ");
    scanf("%d", &N);
    int k=1;
    int s=3;
    while (s<=N)
    {
       s*=3;
       k++;
    }
    printf("%d", k);
    return 0;
}
*/

/*10 Дано целое число N (> 1). Найти наибольшее целое число K, при
котором выполняется неравенство 3^K < N.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("N: ");
    scanf("%d", &N);
    int k=0;
    int s=3;
    while (s<N)
    {
       s*=3;
       k++;
    }
    printf("%d", k);
    return 0;
}
*/

/*11 Дано целое число N (> 1). Вывести наименьшее из целых чисел K,
для которых сумма 1 + 2 + . . . + K будет больше или равна N, и саму эту
сумму.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("N: ");
    scanf("%d", &N);
    int k=0;
    int s=0;
    while (s<N)
    {
       s+=3;
       k++;
    }
    printf("%d %d",k, s);
    return 0;
}
*/

/*12 Дано целое число N (> 1). Вывести наибольшее из целых чисел K,
для которых сумма 1 + 2 + . . . + K будет меньше или равна N, и саму эту
сумму
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("N: ");
    scanf("%d", &N);
    int k=0;
    int s=0;
    while (!(s+k+1>N))
    {
        k++;
        s+=k;

    }
    printf("%d %d",k, s);
    return 0;
}

*/

/*13 Дано число A (> 1). Вывести наименьшее из целых чисел K, для
которых сумма 1 + 1/2 + . . . + 1/K будет больше A, и саму эту сумму.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float A;
    printf("A: ");
    scanf("%f", &A);
    int k=0;
    float s=0;
    while (s<=A)
    {
        k++;
        s+=1/(float)k;

    }
    printf("%d %f",k, s);
    return 0;
}
*/

/*15 Спортсмен-лыжник начал тренировки, пробежав в первый день
10 км. Каждый следующий день он увеличивал длину пробега на P процентов
от пробега предыдущего дня (P — вещественное, 0 < P < 50). По
данному P определить, после какого дня суммарный пробег лыжника за
все дни превысит 200 км, и вывести найденное количество дней K (целое)
и суммарный пробег S (вещественное число).
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float a;
    printf("a:");
    scanf ("%f", &a);
    int k=1;
    float s=10;
    float t=10;
    while (t<=200)
    {
        ++k;
        s+=s*a/100;
        t+=s;
    }
    printf("%d %f",k,t);
    return 0;
}

*/
/*16 Дано целое число N (> 0). Используя операции деления нацело и
взятия остатка от деления, вывести все его цифры, начиная с самой правой
(разряда единиц).
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("N: ");
    scanf("%d", &N);
    while(N>0)
    {
        printf("%d ", N%10);
        N/=10;
    }
}
*/
/*
17 Дано целое число N (> 0). Используя операции деления нацело и
взятия остатка от деления, найти количество и сумму его цифр.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("N: ");
    scanf("%d", &N);
    int k=0;
    int s=0;
    while(N>0)
    {
        printf("%d ", N%10);
        s+=N%10;
        k++;
        N/=10;
    }
    printf("%d %d",k, s);
    return 0;
}

*/
/*18 Дано целое число N (> 0). Используя операции деления нацело и
взятия остатка от деления, найти число, полученное при прочтении числа N
справа налево
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("N: ");
    scanf("%d", &N);
    int k=1;
    int s=0;
    int nn = N;
    while(N>0)
    {
        k*=10;
        N/=10;
    }
   // printf("%f", k);
    k/=10;
   N=nn;
    while(N>0)
    {
        s+=N%10*k;
        k/=10;
        N/=10;
    }

    printf("%d", s);

}
*/

/*19 Дано целое число N (> 0). С помощью операций деления нацело
и взятия остатка от деления определить, имеется ли в записи числа N
цифра «2». Если имеется, то вывести TRUE, если нет — вывести FALSE.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("N: ");
    scanf("%d", &N);
    int two = 0;
    while(N>0)
    {
        printf("%d ", N%10);
        if(N%10==2)
        {
            two=1;
        }
        N/=10;
    }

    if(two==1)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

}
*/

/*20 Дано целое число N (> 0). С помощью операций деления нацело
и взятия остатка от деления определить, имеются ли в записи числа N
нечетные цифры. Если имеются, то вывести TRUE, если нет — вывести
FALSE.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("N: ");
    scanf("%d", &N);
    int s=0;
    while(N>0)
    {
        printf("%d ", N%10);
        if((N%10)%2==1)
        {
            s=1;
            break;
        }
        N/=10;
    }

    if(s==1)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}
*/

/*21 Дано целое число N (> 1). Если оно является простым, то есть не
имеет положительных делителей, кроме 1 и самого себя, то вывести TRUE,
иначе вывести FALSE.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("N:");
    scanf ("%i", &n);
    int k=2;
    while((k<n-1) & ((n%k)!=0))
    {
        ++k;
    }
    printf("%s\n",((n%k)!=0)?"True":"False");
    return 0;
}
*/

/*22 Даны целые положительные числа A и B. Найти их наибольший
общий делитель (НОД), используя алгоритм Евклида:
НОД(A, B) = НОД(B, A mod B), если B != 0; НОД(A, 0) = A.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a,b;
    printf("A:");
    scanf("%i",&a);

    printf("B:");
    scanf("%i",&b);
    while ((a!=0)&(b!=0))
    {
        if (a>b) a=a%b;
        else b=b%a;
    }
    printf("%i\n",a+b);
    return 0;
}
*/

/*23 Дано целое число N (> 1). Последовательность чисел Фибоначчи F(K)
определяется следующим образом:
F(1) = 1, F(2) = 1, F(K) = F(K−2) + F(K−1), K = 3, 4, . . . .
Проверить, является ли число N числом Фибоначчи. Если является, то
вывести TRUE, если нет — вывести FALSE.

/*0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711,…,
первые два числа равны 0 и 1, а каждое последующее число равно сумме двух предыдущих чисел.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("N:");
    scanf("%i",&n);
    int f1=1,f2=1,f=0;

    while (f<n)
    {
        f=f2+f1;
        f2=f1;
        f1=f;
    }
    printf("%s",f==n?"True":"False");
    return 0;
}
*/


/*24 Дано целое число N (> 1). Найти первое число Фибоначчи, большее N.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("N:");
    scanf("%i",&n);
    int f1=1,f2=1,f=0;

    while (f<n+1)
    {
        f=f2+f1;
        f2=f1;
        f1=f;
    }
    printf("%i\n",f);
    return 0;
}
*/

/*25 Дано целое число N (> 1), являющееся числом Фибоначчи: N = F(K). Найти целые
числа F(K−1) и F(K+1) — предыдущее и последующее числа Фибоначчи.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("N:");
    scanf("%i",&n);
    int f1=1,f2=1,f=0;

    while (f<n)
    {
        f=f2+f1;
        f2=f1;
        f1=f;
    }
    printf("F_k-1=%i\nF_k+1=%i\n",f2,f1+f2);
    return 0;
}
*/

/*26 Дано целое число N (> 1), являющееся числом Фибоначчи: N = F(K). Найти целое число K — порядковый номер числа Фибоначчи N.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
   printf("N:");
   scanf("%i",&n);
   int f1=1,f2=1,f=0,k=2;

   while (f<n){
       ++k;
       f=f2+f1;
       f2=f1;
       f1=f;
   }
   printf("%i\n",k);
   return 0;
}
*/

/*1 Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X
следующие значения:
−1, если X < 0;
0, если X = 0;
1, если X > 0.
С помощью этой функции найти значение выражения Sign(A) + Sign(B)
для данных вещественных чисел A и B.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int sign(double X)
{
    if(X<0)
    {
       return -1;
    }
    else if(X==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
 double A;
 printf("A: ");
 scanf("%lf", &A);
 double B;
 printf("B: ");
 scanf("%lf", &B);
 int y=sign(A)+sign(B);
 printf("%d", y);
 return 0;
}

*/

/*2 Описать функцию RootsCount(A, B, C) целого типа, определяющую
количество корней квадратного уравнения A·x^2 + B·x + C = 0
(A, B, C — вещественные параметры, A != 0). Количество корней
определять по значению дискриминанта: D = B^2 − 4·A·C.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int rootscount(double A, double B, double C)
{
    double f=(B*B)-(4*A*C);

    if(f<0)
    {
       return 0;
    }
    else if(f==0)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int main()
{
    double A;
    printf("A: ");
    scanf("%lf", &A);
    double B;
    printf("B: ");
    scanf("%lf", &B);
    double C;
    printf("C: ");
    scanf("%lf", &C);
    int r=rootscount(A, B, C);
    printf("%d", r);
    return 0;
}
*/

/*3 Описать функцию CircleS(R) вещественного типа, находящую площадь
круга радиуса R (R — вещественное). Площадь круга радиуса R вычисляется
по формуле S = π·R^2. В качестве значения π использовать 3.14.

double circles(double R)
{
    double s=3.14*(R*R);
    return s;
}
int main()
{
    double R;
    printf("R: ");
    scanf("%lf", &R);
    double E=circles(R);
    printf("%lf", E);
    return 0;
}
*/

/*4 Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца,
заключенного между двумя окружностями с общим центром и радиусами R1 и R2
(R1 и R2 — вещественные, R1 > R2). Воспользоваться формулой
площади круга радиуса R: S = π·R^2. В качестве значения π использовать 3.14.


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double rings(double r1, double r2)
{
    double s1=3.14*(r1*r1);
    double s2=3.14*(r2*r2);
    return s1-s2;
}
int main()
{
    double r1;
    printf("R1: ");
    scanf("%lf", &r1);
    double r2;
    printf("R2: ");
    scanf("%lf", &r2);
    double E=rings(r1, r2);
    printf("%lf", E);
    return 0;
}
*/

/*1. Описать функцию Quarter(x, y) целого типа, определяющую номер координатной четверти,
в которой находится точка с ненулевыми вещественными координатами (x, y).
С помощью этой функции найти номера координатных четвертей для трех точек с данными ненулевыми координатами*
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int quarter(double x, double y)
{
    if(x>0 && y>0)
    {
        return 1;
    }
    else if(x<0 && y>0)
    {
        return 2;
    }
    else if(x<0 && y<0)
    {
        return 3;
    }
    else
    {
        return 4;
    }
}

int main()
{
    int i;
    for (i=1; i<=3; ++i)
    {
        float x,y;
        printf("X: ");
        scanf("%f", &x);
        printf("Y: ");
        scanf("%f", &y);
        printf("Quarter:%i\n",quarter(x,y));
    }
    return 0;
}
*/

/*#include <math.h>
#include <stdio.h>

double ax(int x, double eps)
{
    double sum = 1;
    double a;
    for (int n = 2; eps >= fabs(a); n++)
    {

        a =(-4*x*pow(n,3)+2*x*pow(n,2) + 4* x*n - 2*x)/n;
// ((-1)* x * (n + 1) * (2*n - 2) * (2*n - 1))/n;
        sum = sum + a;
    }
    return sum;
}
int main()
{
    int a, b, r;
    double eps;
    scanf("%d%d%d%lf", &a, &b, &r, &eps);
    printf("\n_____\n");
    printf("x\ta\n_____\n");
    for (int x = a; x <= b; x += r)
    {
        if(x==0)
        {
            x+=r;
        }
        printf("%d\t", x);
        printf("|\t%lf\n", ax(x, eps));
    }
    printf("_____\n");
    return 0;
}
*/

#include <math.h>
#include <stdio.h>

float ax(int x, float eps);

int main()
{
int a, b, r;
float eps;
scanf("%d%d%d%f", &a, &b, &r, &eps);
printf("\n_____________________\n");
printf("x\ta\n_____________________\n");
for (int x = a; x <= b; x += r)
{
printf("%d\t", x);
printf("|\t%f\n", ax(x, eps));
}
printf("_____________________\n");
return 0;
}

float ax(int x, float eps)
{
float sum = -x/2;
float z;
for (int n = 1; eps >= fabs(z); n++)
{
z = (-4*x*pow(n,3)+2*x*pow(n,2) + 4* x*n - 2*x)/(float)n;
sum = sum + z;
}
return sum;
}






























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































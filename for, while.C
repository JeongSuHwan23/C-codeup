//2023-07-17

//code up 1253 a부터 b까지 출력
#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a<b) //a가 b보다 작을 때
    {
        for(int i=a; i<=b; i++) //i에 a를 대입하고 b보다 크면 break, 아니면 +1이 되는 for문
            printf("%d ", i); //a부터 b까지 출력
    }
    else //b가 a보다 클 때
    {
        for(int i=b; i<=a; i++) //i에 b를 대입하고 a보다 크면 break, 아니면 +1이 되는 for문
            printf("%d ", i); //b부터 a까지 출력
    }
}

//code up 1254 알파벳 출력
#include <stdio.h>
int main(){
    char a, b;
    scanf("%c %c", &a, &b);
    for(int i=a; i<=b; i++) 
        printf("%c ", (char)i); //i를 int -> char로 변환 후 출력
}

//code up 1255 두 실수 사이 출력 
#include <stdio.h>
int main(){
    double a, b;
    scanf("%lf %lf", &a, &b);
    for(double i=a; i<=b; i += 0.01) //i에 a를 대입하고 b보다 커지면 break, 아니면 +0.01이 되는 for문
        printf("%.2lf ", i);
}


//code up 1256 별 출력
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) 
        printf("*");
}

//code up 1257 두 수 사이 홀수 출력
#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++)
        if(i%2==1) printf("%d ", i); //홀수면 i를 출력, 아니면 +1되는 for문
}

//2023-07-19
//codeup 1260 3의 배수의 합
#include <stdio.h>
int main(){
    int a, b, sum=0;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++)
        if(i%3==0)
            sum += i;
    printf("%d", sum);
}

//codeup 1265 구구단
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<10; i++)
        printf("%d*%d=%d", n, i, n*i);
}
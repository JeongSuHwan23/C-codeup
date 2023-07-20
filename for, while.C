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
    for(int i=a; i<=b; i++) //a부터 b까지 실행되는 for문
        if(i%3==0) 
            sum += i; //3의 배수만 더한다
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

//codeup 1266 n개의 수의 합
#include <stdio.h>
int main(){
    int a, n, sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){ //n번 입력을 받는 for문
        scanf("%d", &a);
        sum += a; 
    }
    printf("%d", sum);
}

//codeup 1267 n개의 수 중 5의 배수의 합
#include <stdio.h>
int main(){
    int a, n, sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        if(a%5==0) sum += a;
    }
    printf("%d", sum);
}

//codeup 1268 n개의 수 중 홀수의 갯수
#include <stdio.h>
int main(){
    int a, n, count=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        if(a%2==1) count += 1; //a가 홀수면 카운트한다
    }
    printf("%d", count);
}

//codeup 1269 수열의 값
#include <stdio.h>
int main(){
    int a, b, c, n, result; //시작 값(a), 곱할 값(b), 더할 값(c), 몇 번째 항인지 나타내는 정수(n)
    scanf("%d %d %d %d", &a, &b, &c, &n);
    result = a; //수열의 1항은 a다
    for(int i=2; i<=n; i++) //2항부터 n항까지 계산
        result = result*b+c;
    printf("%d", result);
}

//codeup 1270 1의 개수
#include <stdio.h>
int main(){
    int n, count=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        if(i%10==1) count += 1; //뒷자리가 1이면 카운트한다
    printf("%d", count);
}

//codeup 1271 최댓값
#include <stdio.h>
int main(){
    int a, n, max=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        if(max<a) max = a; //입력된 수가 max보다 크면 max에 대입
    }
    printf("%d", max);
}

//codeup 1271 기부
#include <stdio.h>
int main(){
    int k, h;
    scanf("%d %d", &k, &h);
    if(k%2==0) k *= 5;
    else k = (k+1)/2;
    if(h%2==0) h *= 5;
    else h = (h+1)/2;
    printf("%d", k+h);
}

//codeup 1273 약수
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        if(n%i==0) printf("%d ", i); //n의 약수면 i을 출력
}

//codeup 1274 소수
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=2; i<=n; i++){ //1은 모두의 약수이므로 i는 2부터 시작한다
        if(i==n){ //만약 i가 n과 같으면 n의 약수는 1과 n뿐이므로 소수
            printf("prime");
            break; //break를 안 하면 다음 if문도 실행되므로 "not prime"도 출력된다
        }
        if(n%i==0){ //n이 i로 나눴을 때 나머지가 0이면 소수가 아님 (이 때 i!=1 && i!=n)
            printf("not prime");
            break; //break를 하지않으면 마지막에 "prime"이 출력된다
        }
    }
}

//codeup 1275 제곱
#include <stdio.h>
int main(){
    int k, n, a=1; //0제곱은 1이므로 a에 1을 대입한다 
    scanf("%d %d", &k, &n);
    for(int i=0; i<n; i++) //0제곱일 땐 실행되지 않는다
        a *=k;
    printf("%d", a);
    return 0;
}

//codeup 1276 팩토리얼
#include <stdio.h>
int main(){
    int n, mul=1;
    scanf("%d", &n);
    for(int i=0; i<n; i++) 
        mul *= (n-i); 
    printf("%d", mul);
    return 0;
}

//codeup 1277 몇 번째 데이터 출력
#include <stdio.h>
int main(){
    int n, k;
    scanf("%d", &n); //n>=1인 홀수
    for(int i=0; i<n; i++){
        scanf("%d", &k);
        if(i==0) printf("%d ", k); //처음 입력받은 데이터를 출력
        if(i==n/2) printf("%d ", k); //중간 데이터 값을 출력
        if(i==(n-1)) printf("%d ", k); //마지막 데이터 값을 출력
    }
}

//2023-07-20
//codeup 1279 홀수는 더하고 짝수는 빼고 1
#include <stdio.h>
int main(){
    int a, b, sum=0;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++){
        if(i%2==1) sum += i;
        else sum -= i;
    }
    printf("%d", sum);
}

//codeup 1280 홀수는 더하고 짝수는 빼고 2
#include <stdio.h>
int main(){
    int a, b, sum=0;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++){
        if(i%2==1){ 
            sum += i;
            printf("+%d", i);
        }
        else{
            sum -= i;
            printf("-%d", i);
        }
    }
    printf("=%d", sum);
}

//codeup 1281 홀수는 더하고 짝수는 빼고 3
#include <stdio.h>
int main(){
    int a, b, sum=0;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++){
        if(i%2==1){ 
            if(i==a) printf("%d", i);
            else printf("+%d", i);
            sum += i;
        }
        else{
            printf("-%d", i);
            sum -= i;
        }
    }
    printf("=%d", sum);
}

//codeup 1282 제곱수
#include <stdio.h>
#include <math.h>
int main(){
    int n, t=0;
    scanf("%d", &n);
    t = sqrt(n); // sqrt(n) = n의 제곱근 (n은 int형이라 제곱근도 int로 나온다)
    for(int i=1; i<=n; i++){
        if((n-i)==t*t){
            printf("%d %d", i, t);
            return 0;
        }
    }
}

//codeup 1283 주식투자
#include <stdio.h>
int main(){
    double rate, lm=0;
    int day, fm;
    scanf("%d %d", &fm, &day);
    lm = fm;
    for(int i=0; i<day; i++){
        scanf("%lf", &rate);
        lm = lm +lm*(rate/100);
    }
    printf("%.0f\n", lm-fm);
    if(lm>fm) printf("good");
    else if(lm<fm) printf("bad");
    else printf("same"); 
}


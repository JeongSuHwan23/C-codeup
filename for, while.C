//2023-07-17

//code up 1253 a부터 b까지 출력
#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a<b){ 
        for(int i=a; i<=b; i++){
            printf("%d ", i);
        }
    }
    else{
        for(int i=b; i<=a; i++){
            printf("%d ", i);
        }
    }
}

//code up 1254 알파벳 출력
#include <stdio.h>
int main(){
    char a, b;
    scanf("%c %c", &a, &b);
    for(int i=a; i<=b; i++){
        printf("%c ", (char)i);
    }
}

//code up 1255 두 실수 사이 출력 
#include <stdio.h>
int main(){
    double a, b;
    scanf("%lf %lf", &a, &b);
    for(double i=a; i<=b; ){
        printf("%.2lf ", i);
        i += 0.01;
    }
}


//code up 1256 별 출력
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("*");
    }
}

//code up 1257 두 수 사이 홀수 출력
#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++){
        if(i%2==1) printf("%d ", i);
    }
}

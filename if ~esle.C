//2023-07-15
//코드업 1170 학년과 반은 한자리, 번호는 두자리로 출력
#include <stdio.h>
int main(){
    int g, c, n; //g=학년, c=반, n=번호
    scanf("%d %d %d", &g, &c, &n);
    if(n<10) c*=10; //번호가 10미만이면 반에 10을 곱해서 0을 붙여서 출력한다
    printf("%d%d%d", g, c, n);
}

//코드업 1171 학년은 한자리, 반은 두자리, 번호는 세자리로 출력
#include <stdio.h>
int main(){
    int g, c, n; //g=학년, c=반, n=번호
    scanf("%d %d %d", &g, &c, &n);
    if(c<10) //반의 자릿수를 확인 (한자리면 앞에 0을 붙여서 출력)
    {
        if(n<10) printf("%d0%d00%d", g, c, n); //번호의 자릿수를 확인 (한자리면 앞에 00을 붙여서 출력)
        else if (n<100) printf("%d0%d0%d", g, c, n); //두자리면 앞에 0을 붙여서 출력
        else printf("%d0%d%d", g, c, n); //세자리면 그대로 출력
    }
    else //반의 자릿수를 확인 (두자리면 그대로 출력)
    { 
        if(n<10) printf("%d%d00%d", g, c, n); 
        else if (n<100) printf("%d%d0%d", g, c, n);
        else printf("%d%d%d", g, c, n);
    }
 }

//코드업 1172 세 수 정렬하기 (low -> high)
#include <stdio.h> 
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b) //a가 b보다 클 때
    {
        if(c>a) printf("%d %d %d", b, a, c); //c가 가장 클 때
        else{
            if(b>c) printf("%d %d %d", c, b, a); //c가 가장 작을 때
            else printf("%d %d %d", b, c, a); //c가 b보다는 크고 a보다는 작을 때
        }
    }
    else //b가 a보다 클 때
    {
        if(c>b) printf("%d %d %d", a, b, c);
        else{
            if(a>c) printf("%d %d %d", c, a, b);
            else printf("%d %d %d", a, c, b);
        }
    }
}

//코드업 1173 30분 전
#include <stdio.h>
int main() {
    int h, m;
    scanf("%d %d", &h, &m);
    if(m>=30) //30분 이상일 때
    {
        printf("%d %d", h, m-30); 
    }
    else //30분 미만일 때
    {
        m += 60; //1시간을 60분으로 바꿔서 m에 더한다
        if(h==0) printf("%d %d", h+23, m-30); // 0시일 때 1시간 전인 23시를 h에 더하고, 30분을 뺀다        
        else printf("%d %d", h-1, m-30); //0시가 아니면 h에서 1시간을 빼고, m에서 30분을 빼고 출력한다 
    }
}

//2023-07-16
//code up 1180 만능 휴지통
#include <stdio.h>
int main(){
    int n, m=0;
    scanf("%d", &n);
    m = ((n%10)*10 + n/10)*2; //n에 10울 나눈 나머지에 10을 곱해서 10의 자릿수로 만들고, n을 10으로 나눈 몫과 더한 후에 2를 곱한다.
    if(m>99) m = m-100; //100이 넘으면 100을 빼서 100의 자릿수를 무시하게 만든다.
    if(m>50) printf("%d\nOH MY GOD", m);
    else printf("%d\nGOOD", m);
    return 0;
}

//code up 1204 영어 서수로 표현
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if((n%10)>3 || (n%10)==0) printf("%dth", n); //뒷자리가 0 또는 4 이상인 수를 구분
    else{
        if(n/10==1) printf("%dth", n); //11, 12, 13을 구분
        else if(n%10==1) printf("%dst", n); //뒷자리가 1인 숫자 구분 (11제외) 
        else if(n%10==2) printf("%dnd", n); //뒷자리가 2인 숫자 구분 (12제외) 
        else printf("%drd", n); //뒷자리가 3인 숫자 구분 (13제외) 
    }
}

//code up 1205 최댓값
#include <stdio.h>
#include <math.h> //pow()를 사용할 때 필요
int main(){
    int a, b;
    float max=0;
    scanf("%d %d", &a, &b);
    if(max<a+b) max = a+b; // 게산한 값이 max보다 크면 max에 대입
    if(max<a-b) max = a-b;
    if(max<b-a) max = b-a;
    if(max<a*b) max = a*b;
    if(max<a/b) max = a/b;
    if(max<b/a) max = b/a;
    if(max<pow(a, b)) max = pow(a, b); //pow(a, b) = a를 b번 제곱해라
    if(max<pow(b, a)) max = pow(b, a);
    printf("%.6f", max); //소수점이하 6자리로 출력
}

//code up 1206 배수
#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(b%a==0) printf("%d*%d=%d", a, b/a, b);
    else if(a%b==0) printf("%d*%d=%d", b, a/b, a);
    else printf("none");
}

//code up 1207 윷놀이
#include <Stdio.h>
int main(){
    int a, b, c, d, sum=5;
    scanf("%d %d %d %d", &a, &b, &c, &d); //윷의 상태를 입력받음
    sum = a+b+c+d; //윷의 상태를 더함
    if(sum==0) printf("모"); //0이면 하나도 뒤집어지지 않았으므로 모
    else if(sum==1) printf("도"); //1이면 1개가 뒤집어졌으므로 도
    else if(sum==2) printf("개"); //2이면 2개가 뒤집어졌으므로 개
    else if(sum==3) printf("걸"); //3이면 3개가 뒤집어졌으므로 걸
    else printf("윷"); //아무것도 아니라면 윷
}

//code up 1210 칼로리 계산 
#include <stdio.h>
int main(){
    int a, b, menu[5]={400, 340, 170, 100, 70}; //메뉴의 칼로리를 배열에 넣는다
    scanf("%d %d", &a, &b);
    if((menu[a-1]+menu[b-1])>500) printf("angry"); //메뉴의 칼로리를 더해서 비교 (배열은 0부터 시작해서 -1을 한다)
    else printf("no angry");
}

//code up 1212 삼각형 성립 조건
#include <stdio.h>
int main(){
    int a, b, c, max=0;
    scanf("%d %d %d", &a, &b, &c);
    max = ((a>b) && (a>c)) ? a : ((b>a) && (b>c)) ? b : c; //가장 큰 수를 구하여 max에 대입
    if(max<a+b+c-max) printf("yes"); //가장 큰 수가 나머지 두 수를 더한 값보다 작으로 yes를 출력
    else printf("no"); //아니면 no를 출력
}

//code up 1214 달의 마지막 날 (윤달판별)
#include <stdio.h>
int main(){
    int y, m;
    scanf("%d %d", &y, &m);
    if(m==2){
        if(y%400==0 || (y%4==0 && y%100!=0)) printf("29");
        else printf("28");
    }
    else if(m==4 || m==6 || m==9 || m==11) printf("30");
    else printf("31");

}
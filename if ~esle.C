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
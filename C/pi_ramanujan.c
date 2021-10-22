#include<stdio.h>
#include<math.h>


int factorial(int);

int main(){
    int num = 10;
    double x = (2*pow(2.0,1.0/2.0))/9801;
    double sum = 0;

    for (float k = 0; k <= num; k++){
        sum += (factorial(4*k)*(26390*k+1103))/
        (pow(factorial(k),4)*(pow(396,4*k)));
    }
    printf("x = %lf\n",x);
    printf("sum = %lf\n",sum);
    printf("x*sum = %lf\n",x*sum);
    printf("pi = %.48lf",1/(x*sum));
    
}

int factorial(int n){
    int i,f=1;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}

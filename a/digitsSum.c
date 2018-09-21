#include<stdio.h>

int main(){
  int i ,j ; 
  int n= 0 ;
  scanf("%d",&n);
  int min  = 1000000;
  int small = 0 ;
  int big = n; 
  int half = n/2;
  int sums[half ];
  int sum;
  for(i = 1 ; i <= half+1 ; i++){
    int a = i ;
    int b = n - i ;
    int ad = checkDigit(a);
    int bd = checkDigit(b);
    int bn,an;
    int bdig0,adig0;
    while(bd > 0 ){
      bdig0 = expo(10 ,bd - 1);
      if(bd > 1 )
        bn =  b/bdig0;
      else
        bn = b ;
      sum+= bn;
      b = b - bn*bdig0;
      bd--;
    }

    while(ad > 0 ){
      adig0 = expo(10 ,ad - 1);
      if(ad > 1 )
        an =  a/adig0;
      else
        an = a;
      sum+= an;
      a = a - an*adig0;
      ad--;
    }
    sums[i] = sum ; 
    sum = 0 ;
  }
  for (i = 1 ; i<half+1 ; i++) if(min > sums[i]) min = sums[i] ;
  printf("%d",min);
  return 0 ;
}
int expo(int num ,int n ){
  int i ; 
  int nf = num;
  for (i = 1; i < n ; i++) 
    num = num * nf ; 
  return num; 
}
//調べたい　数と　最大の数　桁数5なら10000
//桁数を返す
int checkDigit(int n ){
  int digit = 0 ;
  if(n == 0 ) digit = 1;
  while(n > 0 ){
    n = n / 10 ;
    digit++;
  }
  return digit;
}


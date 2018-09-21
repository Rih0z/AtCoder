#include<stdio.h>

int main(){
  int n ; 
  int a ;
  int b ;
  int i , j ;
  int sum = 0 ;
  int res = 0 ;
  scanf("%d%d%d",&n,&a,&b);

  for (i = 1 ; i <= n ; i++){
    sum = 0 ;
    j = i ;
    for ( ; j ; j /= 10){
      sum += j % 10 ;
    }
    if( a <= sum && b >= sum ){
      res += i ; 
    }
  }
  printf("%d\n",res);
  return 1 ;
}


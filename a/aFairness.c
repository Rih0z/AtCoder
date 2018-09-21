#include<stdio.h>
#include<stdlib.h>

#define TAKA 0
#define NAKA 1
#define HIK 2
int main(){
 long long a[3];
  int k;

  int i ; 
  int tmpt,tmpn,tmph;
  scanf("%lld%lld%lld%d",&a[0],&a[1],&a[2],&k);
  for(i = 0 ; i < k ; i++){
    tmpt = a[NAKA] + a[HIK];
    tmpn = a[TAKA] + a[HIK];
    tmph = a[TAKA] + a[NAKA];
    a[TAKA] = tmpt ; 
    a[NAKA] = tmpn;
    a[HIK] = tmph ;
      if( llabs(a[TAKA] - a[NAKA] ) > 1000000000000000000)
  {
    printf("Unfair\n");
    break;
  }
  }
  if( llabs(a[TAKA] - a[NAKA] ) > 1000000000000000000)
  {
    printf("Unfair\n");
  }else{
    printf("%lld\n", a[TAKA] - a[NAKA]  );
  }
  return 0 ;
}

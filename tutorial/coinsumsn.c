#include<stdio.h>

int getDigit(int n ,int dig );

int main(){
  int a,b,n;
  int sum;
  int allsum = 0 ;
  int num;
  int tn;
  int kflag = 0 ; 
  int i,j,k ;

  int count = 0 ; 

  scanf("%d",&n);//n以下の数のうち　桁の我が

      printf("under 1000");
  if (n < 1 || n > 10000)
  {
    printf("エラー　想定外の数字です\n");
    return 1; 
  }

      printf("under 1000");
  scanf("%d",&a);//以上
  scanf("%d",&b);//以下であるもの

  for (i = 1 ; i <= n ; i++){
    num = i ; 
    if(i < 10){
      kflag = 1 ;
      sum = i ; 

    }else if( i >= 10 && i < 100 ){
      kflag =  2 ;
      sum = (i/10) + getDigit(i,2);

    }else if ( i >= 100 && i < 1000 ){
      kflag = 3 ;
      tn = i ; 
      sum = (tn/100) ;
      tn = getDigit(tn,3);
      if (tn != 0 ){
        sum += (tn/10) + getDigit(tn,2);
      }
    }else if (i >= 1000 && i < 10000){
      kflag = 4 ; 
      
      tn = i ;
      sum = (tn/1000);
      tn = getDigit(tn,4);
      if(tn != 0 ){
        sum += (tn/100) ;
        tn = getDigit(tn,3);
        if(tn != 0){ 
          sum += (tn/10) + getDigit(tn,2);
        }
      }
    }else if (i == 10000){
      kflag = 5 ; 
      tn = i ;
      tn = tn - 1000;
      if (tn != 0 ){
        sum = (tn/1000);
        tn = getDigit(tn,4);
        if(tn != 0 ){
          sum += (tn/100) ;
        }
        tn = getDigit(tn,3);
        if(tn != 0){
          sum += (tn/10) + getDigit(tn,2) + 1;
        }
      }
    }

    if(sum >= a && sum <= b){
//      printf("%d,",num);
      allsum += num;
      count++;
    }
  }

  printf("%d\n",allsum);
  return 0;
}
int getDigit(int n ,int dig ){
  int i ; 
  int num,dign ; 
  dign = 1 ; 
  for (i = 1 ;  i < dig ; i++){
    dign = dign * 10 ; 
  }

  num =  ( n % ( (n/dign) * dign) );
  return num ; 
}


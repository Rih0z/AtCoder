/*******************************
 * written by Koki Riho
 * Rih0z https://github.com/Rih0z
 *******************************/

#include<iostream>
#include<map>

#define DEBUG false

typedef long long ll;
using namespace std;

int scanInt(void);
string scanString(void);

void scanLlArr(ll *a , int n);
void scanCharArr(char *string);

void printInt(int p);
void printLlArr(ll *a);
void printCharArr(char *string);


void perSum(ll *a , ll *sum ,int n);
int make9(string);
int addAllDigit(string s );
/*************Global variable  **************/
int N ;
string S ;

int ans = 0 ;

/*******************************/

int main(){
  if (DEBUG){
    std::printf("******debug mode********\n");
  }
  int i,j ;
  cin >> S;
  N = S.length();
  cout << max(make9(S) ,addAllDigit(S) ) <<'\n' ;



  if (DEBUG){
    std::printf("******debug********\n");

    std::printf("******debug********\n");
  }
  return 0 ;
}

int make9(string s){
 int d = s[0] - '0' - 1 ;
 d += 9 * (s.length() - 1 );
 return d ;
}

int addAllDigit(string s ){
  int d = 0 ;
  for(int c : s ) d += c - '0';
  return d;
}
//各地点までの部分和を計算する
void perSum(ll *a , ll *sum ,int n){
  int i ;
  sum[0] = a[0];
  for(i = 1 ; i < n ; i++){
    sum[i] = a[i] + sum[i-1];
  }

}
/******** scan **************/
int scanInt(void ){
  int n ;
  if(std::scanf("%d",&n)){
  }else{
    std::printf("scanN error\n");
    std::exit(1);
  }
  return n ;
}
void scanLlArr(ll *a , int n){
  int ireadA ; 
  for (ireadA =  0 ; ireadA < n ; ireadA++){
    if(std::scanf("%lld",&a[ireadA])){
    }else{
      std::printf("readA error\n");
      std::exit(1);
    }
  }
}

string scanString(void){
  string s ;
  if(cin >> s){ 
  }
  else{
    std::printf("scanString error\n");
    std::exit(1);
  }
  return s;
}

void scanCharArr(char *string){
  if(scanf("%s",string))
  {}
  else{
    std::printf("scanCharStr error\n");
    std::exit(1);
  }
}
/************* print **************/
void printInt(int p){
  if(std::printf("%d\n",p)){
  }else{
    std::printf("intPrintf Error\n");
    std::exit(1);
  }
}

void printLlArr(ll *a){
  int i ;
  for(i = 0 ; i < sizeof(a)/sizeof(ll) ; i++){
    if(std::printf("%lld ",a[i] )){
    }else{
      std::printf("intPrintN Error i = %d stopped \n",i);
      std::exit(1);
    }
  }
  std::printf("\n");
}
void printCharArr(char *string){
 for(int i = 0 ; i < sizeof(string)/sizeof(char); i++){
   if(printf("%c",string[i])){
     }
   else{
      std::printf("charStrPrint Error i = %d stopped \n",i);
      std::exit(1);
   }
 }
 printf("\n");
}

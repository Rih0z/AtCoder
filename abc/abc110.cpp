/*******************************
 * written by Koki Riho
 * Rih0z https://github.com/Rih0z
 * the base of this program is 
 * https://www.youtube.com/watch?v=gdQxKESnXKs
 * written by chokudai
 *******************************/

#include<iostream>
#include<map>
#include<vector>
#include<string>

#define DEBUG false

#define FOR(i , a, b) for(size_t i = a ; i < b ; i++ )
#define REP(i,b) FOR(i , 0 , b)
#define RFOR(i,a,b) for(size_t i = a-1 ; i >= b ; i--)
#define RREP(i,a) RFOR(i,a,0)



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

/*************Global variable  **************/
string S,T ;

/*******************************/

int main(){
  if (DEBUG){
    std::printf("******debug mode********\n");
  }

  cin >> S >> T ;
  vector<int> start(26,-1) ;
  vector<int> goal(26,-1) ;

  REP(i,S.size()){
    int a = S[i] - 'a' ;
    int b = T[i] - 'a' ;

    if( start[a] != -1 || goal[b] != -1  ){
      if(start[a] != b || goal[b] != a  ){
        cout << "No" << endl;
        return 0 ;
      }
    }else{

    start[a] = b ;
    goal[b] = a ;
    }
  }
  cout << "Yes" << endl ;
  if (DEBUG){
    std::printf("******debug********\n");

    std::printf("******debug********\n");
  }
  return 0 ;
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

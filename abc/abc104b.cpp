/*******************************
 * written by Koki Riho
 * Rih0z https://github.com/Rih0z
 *******************************/

#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<numeric>
#include<algorithm>

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
int N ;
string S ;
string ans = "AC";
char str[26];
std::map<char,int> M ;
/*******************************/

int main(){
  if (DEBUG){
    std::printf("******debug mode********\n");


    char a = 'a';// a~z 97 ~ 123
    char A = 'A' ;//A~Z  65 ~91
    char c = 'c' ;
    char C = 'C' ;
    printf("a = %d A = %d\n c = %d C = %d\n",a,A,c,C);
  }
  int cn = 1000;
  cin >> S ;
  if(S[0] != 'A')
    ans = "WA";
  for(int i = 2 ; i < S.length()-1 ; i++ )
  {
    if(S[i] == 'C'){
     cn = i ;
     break;
    }
  }
  if (cn == 1000){
    ans = "WA";
  }

  for(int i = 1 ; i < S.length() ; i++){
    if(i != cn && S[i] < 92){
      ans = "WA";
      break;
    } 
  }
  cout << ans << endl;
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


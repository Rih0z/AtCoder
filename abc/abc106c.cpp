
/*******************************
 * written by Koki Riho
 * Rih0z https://github.com/Rih0z
 *******************************/

#include<stdio.h>
#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<numeric>
#include<algorithm>
#include<cmath>
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
char str[26];
std::map<char,int> M ; 
string S; 
ll K;
ll num  = 0 ;
int tmpN;
/*******************************/

int main(){
  if (DEBUG){
    std::printf("******debug mode********\n");
  }
  cin >> S >> K ;
  REP(i,S.length()){
    tmpN = S[i] - '0' ;
    if(DEBUG){
      cout << num << endl;
    }
    
    
    if((tmpN != 1 && tmpN != 0) || i+1 == K){
      cout << S[i] << endl;
      return 0 ;
    }
  }
    if(S.length() >= K)
      cout << 1 <<endl;


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

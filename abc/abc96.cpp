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
/*******************************/

int main(){
  if (DEBUG){
    std::printf("******debug mode********\n");
  }

  int ans ; 
  int H,W ;
  cin >> H >> W ;
  string hei[H];
  bool c[W] ;
  REP(i,W){
    c[i] = false ;
  }
  REP(i,H){
    cin >> hei[i];
  }
  int dx[4] = {1,-1,0,0};
  int dy[4] = {0,0,1,-1};
  :wq
  REP(i,H){
    REP(j,W){
      if(S[i][j] == "#")
      {
        if(j+2 == W){
          c[j]= true ;
          continue;
        }
        if(S[i][j+1] == "#"){
          S[i][j] = ".";
          S[i][j+1] = ".";
          j++;
          continue;
        }else{
          c[W] =true;
        }
      }

    }
  }
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


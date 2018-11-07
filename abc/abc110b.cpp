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
int N,M,X,Y ;
char str[26];
/*******************************/

int main(){
  if (DEBUG){
    std::printf("******debug mode********\n");
  }
  cin >> N >> M >> X >> Y ;
  int x[N];
  int y[M];
  bool o1 = true;
  bool o2 = true;
  REP(i,N){
    cin >> x[i];
  }
  int afadsfa ;
  int j,k;
  REP(i,M){
    cin >> y[i];
  }
  for(int z = X+1; z <= Y ;z++){
    REP( j,N){
      if(x[j] >= z){
        o1 =false;
      }
    }
    REP(k,M){
      if(y[k] < z){
        o2 = false;
      }
    }
    if(o1 && o2){
      cout << "No War" << endl;
      return 0 ;
    }else
    {
      o1 = true ;
      o2 = true ;
    }
  }
  printf("War\n");
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


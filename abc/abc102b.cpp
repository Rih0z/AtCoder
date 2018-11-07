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
char str[26];
std::map<int,int> M ;
/*******************************/

int main(){
  if (DEBUG){
    std::printf("******debug mode********\n");
  }
  cin >> N ;
  int a[N];
  int b[N] ;
    REP(i,N){
      cin >> a[i];
    }
    vector<int> data(N,0) ;

    int maxs = 0 ;
    int mins = 1999999999;
    int ans = 0 ;
  
    for(int i = 1 ; i < N+1 ; i++)
    {
      a[i-1] = ( a[i-1] - i  );

      if(  M.find(a[i-1])!= M.end() ){
        //見つかた
        M[a[i-1]]++;
      }else{
        //見つからなかった
        M[a[i-1]]= 0 ;
      }
    }
    int key,tmp;
    tmp = maxs;
    REP(i,N){
      tmp = maxs;
      maxs = max(maxs,M[a[i]]);
      if(maxs != tmp){
        key = a[i];
      }
    }
    if(DEBUG){
      
    cout << "key  " << key <<endl;
    }
    int ans2;
    REP(i,N){
      //if(i+1 > key){
     // ans += abs( a[i] + key);
      //}else{
      //
      //
      int sum = key +i +1;
      ans += abs( a[i] - (sum)  );
      //}
      ans2 += a[i];
    }
    ans = min(ans,ans2);
    cout << ans << endl;
      if (DEBUG){
        REP(i,N)
          cout << a[i]<< "  " ;
        cout << endl;
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


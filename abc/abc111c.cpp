/*******************************
 * written by Koki Riho
 * Rih0z https://github.com/Rih0z
 * the base of this program is http://c-mer.hatenablog.com/entry/2018/09/30/013414
 * made by C-mer
 *******************************/

#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
#define DEBUG true

#define FOR(i , a, b) for(size_t i = a ; i < b ; i++ )
#define REP(i,b) FOR(i , 0 , b)
#define RFOR(i,a,b) for(size_t i = a-1 ; i >= b ; i--)
#define RREP(i,a) RFOR(i,a,0)

#define INF 1e7
#define num 111111

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

int p1[num] ,p2[num];

vector<int> a,b ;

/*******************************/

int main(){
  if (DEBUG){
    std::printf("******debug mode********\n");
  }
  int n , m1 = 1 ,m2 = 1 , tmp;
  cin >> n ;
  REP(i,n/2){
    cin >> tmp;
    p1[tmp]++;
    cin>>tmp;
    p2[tmp]++;

  }
  if (n > 2 && n%2 != 0 ){
    cin >> tmp;
    p2[tmp]++;
  }
  REP(i,num){
    if(p1[i] > m1 ){
      a.clear();
      a.push_back(i);
      m1 = p1[i];

    } else if (p1[i] == m1){
      a.push_back(i);


    }

    if(p2[i] > m2 ){
      b.clear();
      b.push_back(i);
      m2 = p2[i];

    } else if (p2[i] == m2){
      b.push_back(i);


    }


  }
  if (a.size() >= 2 || b.size() >= 2 ){
    cout << n - m1 - m2 << endl;
  
  }else if (a[0] != b[0]){
    cout << n - m1 - m2 << endl;

  } else {
    sort(p1,p1+num);
    sort(p2 , p2+num);
    int r = max(m1 + p2[num - 2] , m2 + p1[num-2]);
    cout << n - r << endl;

  }


  if (DEBUG){
    std::printf("******debug********\n");
    cout << "size of a " << endl;
    cout << a.size() << endl;

    cout << "THE a is .. " << endl;
    REP(i,a.size())
     cout << a[i] << endl;
    
    cout << "size of b " << endl;
    cout << b.size() << endl;

    cout << "THE b is .. " << endl;
    REP(i,b.size())
     cout << b[i] << endl;

    cout << "sorted p1 is " << endl;
    sort(p1,p1+num);
    REP(i , num )
     printf("%d",p1[i]);

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

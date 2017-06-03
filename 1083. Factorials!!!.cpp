#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n = 0;
  while(scanf("%d", &n) != EOF){
    char k[100];
    scanf("%s", &k);
    getchar();
    
    int len = strlen(k);
    
    int fact = 1;
    for(; n >= 1; n -= len){
      fact = fact * n;
    }
    printf("%d\n", fact);
  }
  
  return 0;
}

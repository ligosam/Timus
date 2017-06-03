#include<bits/stdc++.h>

int main()
{
  int a1 = 0, b1 = 0, a2 = 0, b2 = 0, a3 = 0, b3 = 0;
  while(scanf("%d %d %d %d %d %d", &a1, &b1, &a2, &b2, &a3, &b3) != EOF){
    int x = a1 - a3;
    int y = b1 - b2;
    printf("%d %d\n", x, y);
  }
  
  return 0;
  
}

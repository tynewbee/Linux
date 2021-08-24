#include "cal.h"

int main()
{
  int x;
  int y;
  while(1)
  {
    printf("please#:\n");
    scanf("%d%d",&x,&y);
    printf("x+y=%d\n",MyAdd(x,y));
  }
  return 0;
}

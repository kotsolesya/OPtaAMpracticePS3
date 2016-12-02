#include <stdio.h>
#include <iostream>
int main()
{
char str[] = "FFbbDD qqqw wererw 333 rrrrr  DccccN", buf[256], *p = str, *pTmp = NULL;
ptrdiff_t cntr, offset = 0;
while(*p)
{
pTmp = p;
while(*p == *pTmp) ++p;
cntr = p - pTmp;
offset += sprintf(buf + offset, cntr > 1 ? "%c(%d)" : "%c", *pTmp, cntr);
}
puts(buf);
system("pause");
return 0;
}

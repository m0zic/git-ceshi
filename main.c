#include <stdio.h>

int main ()
{
	int i,j,k;
	printf("Hello\n"); //test for pull
	//本地修改
 	for ( i=1;i<=3;i++)        //对A有3中选择X，Y，Z
  		for ( j=1;j<=3;j++)    //对B有3中选择X，Y，Z
           for (k=1;k<=3;k++)  //对C有3中选择X，Y，Z
      			if (i!=j&&j!=k&&i!=k&&i!=1&&j!=1&&j!=3)  
        			//和A，B，C对手的必须不相同 (i!=1 就是A的对手不是X，j!=1 就是B的对手不是X，j!=3就是B的对手不是Z)
       				printf ("A--%c\nB--%c\nC--%c\n",i+'X'-1,j+'X'-1,k+'X'-1);
 	return 1;
}

#include <stdio.h>
#define CAT -1
int main()
{
	int i,j;
	int R,C,N;
	scanf("%d%d%d",&R,&C,&N);
	int maze[R+1][C+1];
	for(i=0;i<R+1;++i)for(j=0;j<C+1;++j)maze[i][j]=0;
	for(i=0;i<N;++i)
	{
		int x,y;
		scanf("%d%d",&y,&x);
		maze[y][x]=CAT;
	}
	maze[1][1]=1;
	for(i=1;i<=R;++i)
		for(j=1;j<=C;++j)
			if(maze[i][j]!=CAT){
				if(maze[i-1][j]!=CAT)maze[i][j]+=maze[i-1][j];
				if(maze[i][j-1]!=CAT)maze[i][j]+=maze[i][j-1];
            }
	printf("%d\n",maze[R][C]);

} 

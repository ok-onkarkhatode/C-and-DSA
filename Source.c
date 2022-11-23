#include<stdio.h>
#include<stdlib.h>

#define MAX 10

struct CQUEUE
{
  int a[MAX];
  int front;
  int rear;
};

int isfull(struct CQUEUE* CQptr)
{
	return (CQptr->front) ==((CQptr->rear +1)%MAX);
}
int insert(struct CQUEUE* CQptr,int elements)
{
  CQptr ->rear=(CQptr ->rear+1) % MAX;
  CQptr ->a[CQptr ->rear] = elements;
}

 int isempty(struct CQUEUE* CQptr)
 {
   return CQptr-> front == CQptr ->rear;
 }

 void del(struct CQUEUE* CQptr)
 {
   CQptr->front = (CQptr->front+1) % MAX;
  printf("delete element is %d\n",CQptr->a[CQptr->front]);
 }

 int bfs(int graph[][8], int start ,int n)
 {
	int i,j;
	int visited;
	i=start;
	struct CQUEUE Q;
	Q.front=-1;
	Q.rear=-1;

	visited[i] = 1;
	visited[8]={0, 0, 0, 0, 0, 0, 0, 0};
	insert(&Q,i);
	

	while(!isempty(&Q))
	{
	  i=delete(&Q);

	  for(j=1;j<=n;j++)
	  {
	    if(graph[i][j] ==1 && visited[j] == 0)
		{
		 visited[j]=1;
		 printf("%d=",j);
		 insert(&Q,j);
		}
	  }
	
	}
 }

  void dfs(int graph[][8], int start ,int n)
  {
  static int visited[8]={0};
  int j;

  if(visited[start]==0)
  {
   printf("%d=",start);
	visited[start]=1;

	for(j=1;j<n;j++)
	{
	 if(graph[start][j]==1 && visited[j] == 0)
	 {
	  dfs(graph,1,8);
	 }
	}
	
  }



  }
void main()
{  int n,start;
	int graph[8][8]={
					 {0, 0, 0, 0, 0, 0, 0, 0},
					 {0, 0, 1, 0, 1, 0, 0, 0},
					 {0, 1, 0, 1, 0, 0, 0, 0},
					 {0, 0, 1, 0, 1, 1, 0, 0},
					 {0, 1, 0, 1, 0, 1, 0, 0},
					 {0, 0, 0, 1, 1, 0, 1, 1},
					 {0, 0, 0, 0, 0, 1, 0, 0},
					 {0, 0, 0, 0, 0, 1, 0, 0}
	                 };
					
	bfs(graph[][8], 1,n);
	dfs(graph[][8], 1,n);

}

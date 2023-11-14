#include<stdio.h>
int main();
{
  struct sockaddr_insa,cli;
  int n,sockfd;
  sockfd=socket(AF_INET,SOCK_STREAM,0);
  if(sockfd<0){ printf("\nError in Socket");
  exit(0);
}
  else printf("\nSocket is Opened");
  sa.sin_family=AF_INET;
  sa.sin_port=htons(5600);
  if(connect(sockfd,(struct sockaddr*)&sa,sizeof(sa))<0)
{
  printf("\nError in connection failed");
  exit(0);
}
  else
  printf("\nconnected successfully");
  if(n=read(sockfd,buff,sizeof(buff))<0)
{
  printf("\nError in Reading");
  exit(0);
}
  else
{
  printf("\nMessage Read %s",buff);
}
}

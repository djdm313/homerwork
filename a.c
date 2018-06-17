#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
#ifndef_UNISTD_H
#define_UNISTD_H  
#include<IO.H>  
#include<PROCESS.H>  
#endif
#defineTRUE1
#defineFALSE0
pl[i].pn=i;
pl[i].pfn=INVALID;/*置页面控制结构中的页号，页面为空*/
pl[i].counter=0;
pl[i].time=-1;        /*页面控制结构中的访问次数为0，时间为-1*/
}
for(i=0;i<total_pf-1;i++)
{
pfc[i].next=&pfc[i+1];
pfc[i].pfn=i;
}  /*建立pfc[i-1]和pfc[i]之间的链接*/
pfc[total_pf-1].next=NULL;
pfc[total_pf-1].pfn=total_pf-1;
freepf_head=&pfc[0];        /*空页面队列的头指针为pfc[0]*/
return 0;
}
min=pl[j].counter;
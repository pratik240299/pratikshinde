
#include<stdio.h>

 struct company {

       	 struct frontend {
	 
		 int teamsize;
		 char tech[20];
	 }fend;
	 
	 struct backend {
	 
		 int teamsize;
		 char tech[20];
	 }bend;
	 
	 struct devops {
	 
		 int teamsize;
		 char service[20];
	 }devp;
 };

 void main() {
 
	 struct company bilearn = {{34,"ReactJS"},{98,"Springboot"},{55,"AWS"}};
	 printf("Frontend : %d & %s\n",bilearn.fend.teamsize,bilearn.fend.tech);
	 printf("backend : %d & %s\n",bilearn.bend.teamsize,bilearn.bend.tech);
	 printf("Devops : %d & %s\n",bilearn.devp.teamsize,bilearn.devp.service);
 }

/*

Frontend : 34 & ReactJS
backend : 98 & Springboot
Devops : 55 & AWS

*/

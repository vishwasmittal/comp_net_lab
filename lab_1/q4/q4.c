#include "bits/stdc++.h"
#include "unistd.h"
using namespace std;

int main(){
	pid_t pid;
	cout<<"root "<<getpid()<<endl;fflush(stdout);
	pid = fork();
	if(pid>0){
		pid = fork();
		if(pid==0){
			cout<<"child "<<getpid()<<endl;fflush(stdout);
			pid = fork();
			if(pid==0)cout<<"grandchild "<<getpid()<<endl;fflush(stdout);
			if(pid>0){
				pid = fork();
				if(pid==0)cout<<"grandchild "<<getpid()<<endl;fflush(stdout);
			}
		}
	}else{
		cout<<"child "<<getpid()<<endl;fflush(stdout);
		pid = fork();
		if(pid==0)cout<<"grandchild "<<getpid()<<endl;fflush(stdout);
		if(pid>0){
			pid = fork();
			if(pid==0)cout<<"grandchild "<<getpid()<<endl;fflush(stdout);
		}
	}
	
}

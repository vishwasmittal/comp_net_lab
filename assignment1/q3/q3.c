#include "bits/stdc++.h"
#include "unistd.h"
using namespace std;

int main() {
	cout<<"process id "<<getpid()<<endl;
	for(int i =0; i<5; i++){
		pid_t pid = fork();
		if(pid==0){
			cout<<"process id "<<getpid()<<endl;
		}
	}
	return 0;
}


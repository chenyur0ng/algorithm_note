/*
题目描述
有一行电文，已按如下规律译成密码：

A-->Z        a-->z

B-->Y        b-->y

C-->X        c-->x

......          ......

即第一个字母变成第26个字母，第i个字母变成第（26-i+1)个字母，非字母字符不变。要求根据密码译回原文，并输出。

输入
输入一行密文
输出
解密后的原文，单独占一行。

样例输入
ZYX123zyx
样例输出
ABC123abc
*/

/*写不下去系列
include<stdio.h>
int main(){
	int i;
	char a[100];
	for(i=0;i<100;i++){
		scanf("%c",a);
		if(a[i]==32){
			printf("the end");
			break;
		}
	}
	return 0;
}


#include<iostream>
using namespace std;
int main(){
	char str[200];
	int i;
	while(cin.getline(str,200)){
		for(i=0;str[i]!='/0';i++){
			if(str[i]=='z'){
				str[i]='a';
				continue;
			}
			if(str[i]=='Z'){
				str[i]='A';
				continue;
			}
			if(str[i]==' '){
				str[i]++;
			}
			cout<<str<<endl;
		}
	}
	return 0;
}
*/
#include<stdio.h>
char *s="AZBYCXDWEVFUGTHSIRJQKPLOMNazbycxdwevfugthsirjqkplomn";
int main(){
    int i,c;
    while((c=getchar())!=EOF){
        for(i=1;s[i] && s[i]!=c;i++);
        if(s[i])putchar(s[i-1]);
		else putchar(c);
    }
    return 0;
}





































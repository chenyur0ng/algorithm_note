/*
题目描述
写个算法，对2个小于1000000000的输入，求结果。特殊乘法举例：123 * 45 = 1*4 +1*5 +2*4 +2*5 +3*4+3*5
输入
 两个小于1000000000的数

输出
 输入可能有多组数据，对于每一组数据，输出Input中的两个数按照题目要求的方法进行运算后得到的结果。

样例输入
24 65
42 66666
3 67
样例输出
66
180
39
*/
#include<stdio.h>
#include<string.h>
#define MAXN 15
int main(){
	int a,b;
	char str_a[MAXN];
	char str_b[MAXN];
	while(scanf("%d%d",&a,&b)!=EOF){
		sprintf(str_a,"%d",a);
		sprintf(str_b,"%d",b);
	    int sum=0;//本来我把sum初始化放在while循环外面的，结果错误，因为对于多组数据不行
		for(int i=0;i<strlen(str_a);i++){
			for(int j=0;j<strlen(str_b);j++){
				sum+=(str_a[i]-'0')*(str_b[j]-'0');//思考为什么要减去'0'；）
			}
		}
		printf("%d\n",sum);	
	}
	return 0;
}
/*题目描述
猴子吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。 
第二天早上又将剩下的桃子吃掉一半，又多吃一个。以后每天早上都吃了前一天剩下的一半零一个。 
到第N天早上想再吃时，见只剩下一个桃子了。求第一天共摘多少桃子。
输入
N
输出
桃子总数
样例输入
10
样例输出
1534
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=1;
    for (int i = 1; i < n; i++)     //第n天没吃，只有1到（n-1）天吃了桃子
    {
        sum=(sum+1)*2;      //头一天的数量=(第二天早上剩下的桃子数量+1)*2
    }
    
    printf("%d\n",sum);
    
    return 0;
}
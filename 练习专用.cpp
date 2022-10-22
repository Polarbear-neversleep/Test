//各种练习草稿,用完记得清空哟 
//记得赋初值！！！ 
#include<stdio.h>
#include<cstring> 
#include<malloc.h>
using namespace std;
struct name{
	int a;
	bool b;
	char c;
}; 
struct name1{
	bool a;
	int b;
	char c;
};
int aaa(int *nums,int numsSize){
	if(numsSize==3)
    {  
        if(nums[0]+nums[1]>nums[2]&&nums[0]+nums[2]>nums[1]&&nums[2]+nums[1]>nums[0])
        {
            return nums[0]+nums[1]+nums[2];
        }
        else
        {
            return 0;
        }
    }
    for(int i=1;i<numsSize;i++){
        int j=i;
        while(nums[i]>nums[j-1]&&j-1>=0)
        {
            j--;
        }
        if(j!=i)
        {
            for(int z=i;z>=j;z--)
            {
                nums[z]=nums[z-1];
            }
            nums[j]=nums[i];
        }
    }
} 
//连接字符串 
char *stract(char *dest,const char *src){
	int i=0,j=0;
	while(*dest!='\0')
	{
		dest++;
		i++;
	}
	while(*src!='\0')
	{
		dest[i+j]=src[j];
		src+=1;
		j++;
	}
	*(dest+i+j+1)='\0';
}
//大小写
void str_toupper(char *str){
	while(*str!='\0'){
		if(*str>=65&&*str<=90){
			*str+=32;
		}
		if(*str>=97&&*str<=122){
			*str-=32;
		}
		str+=1;
	}
} 
//转换十进制
int transbinary(char *s)
{
	int sum=0,bin=0;
		for(int i=0;i<8;i++)
		{
			if(*s=='0')
			{
				bin=0;
			}
			else if(*s=='1')
			{
				bin=1;
				for(int j=7-i;j>0;j--)
				{
				bin*=2;	
				}
			}
			s+=1;
			sum+=bin;
		}
	return sum;
}
//鸡兔同笼问题
void rabbitchick(int n,int m){
	int r,c;
	for(r=0;r<=n;r++){
		c=n-r;
		if(4*r+2*c==m)
		{
		printf("%d %d",c,r);
		return ;	
		}
	} 
	printf("无解");
	return ;
} 
bool isUgly(int n)
{
    if(n<1)
    {
        return false;
    }
    
    bool flag1=true;
    bool flag2=true;
    for(int i=3;i<=n/2;i++)
    {
        if(n%i==0&&(i!=3&&i!=5))
        {
            for(int j=2;j<i/2;j++)
            {
                if(i%j==0)
                {
                    flag2=false;
                    break;
                }
            }
            if(flag2)
            {
                flag1=false;
                break;
            }
        }
    }
    return flag1;
}
bool areAlmostEqual(char * s1, char * s2)
{
    bool flag=true;
    int num=0;
    bool com1,com2;
    while(*s1!='\0')
    {
        if(*s1!=*s2&&num==0)
        {
            com1=*s1;
            com2=*s2;
            num++;
        }
        s1++;
        s2++;
        if(*s1!=*s2&&num==1)
        {
        	if(*s1=='\0'&&*s2=='\0')
            {
                flag=false;
            }
            if(com1!=*s2||com2!=*s1)
            {
                flag=false;
                break;
            }
        }
    }
    return flag;
}
int main()
{

//	//鸡兔同笼问题 
//	int n,m;
//	scanf("%d",&n);
//	scanf("%d",&m);
//	rabbitchick(n,m);
//	//连接字符串 
//	char big[20]="我爱";
//	char *pstr="自由贸易港";
//	strcat(big,pstr);
//	printf("%s",big);
//	//大小写
//	char s[100];
//	scanf("%s",s);
//	str_toupper(s);
//	printf("%s",s);
//	//转换十进制 
//	char s1[100];
//	scanf("%s",s1);
//	printf("%d",transbinary(s1));
//  赋值语句兼判断兼优先级 
//	int x=3,y=3;
//	printf("x1=%d x2=%d\n",x++,x);//3 40
//	printf("y1=%d y2=%d",++y,y);//4 4	
//	int a=3,x=3;
//	int b=!5>2||(a=0)&&(a+=1);
//	int y=!5<2||(x=1)&&(x+=1);
//	printf("a=%d,b=%d\n",a,b);
//	printf("x=%d,y=%d\n",x,y);
//	//左移右移 
//	printf("%d\n",3<<3);
//	printf("%d\n",-3<<3);
//	printf("%d\n",15>>2);
//	printf("%d\n",-15>>2);
//  结构体空间 
//	printf("%d\n",sizeof(name1));
//	printf("%d",sizeof(name));
//	isUgly(7); 
//	int *arr;
//	arr=constructRectangle(4,arr);
//	for(int i=0;i<2;i++)
//	{
//		printf("%d",arr[i]);
//	}
	areAlmostEqual("qgqeg","gqgeq");
} 
//1 1 Jimmy 53 45 42 1 2 KK 52 98 36 1 3 JJ 100 97 98 


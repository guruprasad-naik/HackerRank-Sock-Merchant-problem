/*
# HackerRank-Sock-Merchant-problem
John works at a clothing store. He has a large pile of socks that he must pair by color for sale. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

For example, there are  socks with colors . There is one pair of color  and one of color . There are three odd socks left, one of each color. The number of pairs is .

Function Description

Complete the sockMerchant function in the editor below. It must return an integer representing the number of matching pairs of socks that are available.

sockMerchant has the following parameter(s):

n: the number of socks in the pile
ar: the colors of each sock
Input Format

The first line contains an integer , the number of socks represented in .
The second line contains  space-separated integers describing the colors  of the socks in the pile.

Constraints

 where 
Output Format

Return the total number of matching pairs of socks that John can sell.

Sample Input

9
10 20 20 10 10 30 50 10 20
Sample Output

3
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// */
#include<stdio.h>
int main()
{
    int n,i,sum=0,lp=0,cnt=0,temp=0;
    scanf("%d",&n);
    int arr[n];
    int tarr[n];
    for(i=0;i<n;i++)
    {
        tarr[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int present(int t)
    {
        int lc=0;
        for(int k=0;k<n;k++)
        {
            if(t==tarr[k])
            {
                lc++;
            }
        }
        if(lc>0)
            return 1;
        else
            return 0;
    }
    void add(int t1,int index)
    {
        tarr[index]=t1;
    }
    for(lp=0;lp<n;lp++)
    {
        
        temp=arr[lp];
        int p=present(temp);
        if(p==0)
        {
            add(temp,lp);
            
            for(int k=0;k<n;k++)
            {
                
                if(temp==arr[k])
                {
                     cnt=cnt+1;

                }
            }
            sum=sum+(cnt/2);
            cnt=0;
        }
    }
    printf("%d",sum);
    return 0;
}

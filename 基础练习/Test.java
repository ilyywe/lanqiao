package algorithm.Lanqiao.基础练习;

import java.util.Scanner;

public class Test {

	public static void main(String[] args)
	{
		Scanner cin=new Scanner(System.in);
		int  n=cin.nextInt();
		long[] sum=new long[4000];
		for (int i = 0; i < sum.length; i++)
			sum[i]=0;
		sum[0]=1;
		int r=0;
		int re=0;

		for (int i = 2; i <=n; i++)
		{
			r=0;
			for (int j = 0; j <sum.length; j++)
			{
				re=(int) (sum[j]*i+r);
				sum[j]=re%10;
				r=re/10;
			}
		}
		//找出前置0和结果之间的界限
		long flag=0;
		for (long i = sum.length-1; i>=0; i--)
			if (sum[(int) i]!=0)
			{
				flag=i;
				break;
			}
		//从下标flag一直输出到下标0
		for (long i =flag; i>-1; i--)
			System.out.print(sum[(int) i]);
	}

}

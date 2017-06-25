// #include <stdio.h>

// int main()
// {
// 	int fahr, celsius;
// 	int lower, upper, step;
// 	lower = 0;
// 	upper = 3000;
// 	step = 20;
// 	fahr = lower;
// 	while(fahr<=upper){
// 		celsius = 5 * (fahr-32) / 9;
// 		printf("%d\t%d\n", fahr, celsius);
// 		fahr = fahr + step;
// 	}
// }


// #include <stdio.h>

// int main()
// {
// 	float fahr, celsius;
// 	int lower, upper, step;
// 	lower = 0;
// 	upper = 300;
// 	step = 20;
// 	fahr = lower;
// 	while(fahr<=upper){
// 		celsius = 5.0 / 9.0 * (fahr - 32);
// 		printf("%3.2f\t%3.2f\n", fahr, celsius);
// 		fahr = fahr + step;
// 	}
// }


// #include <stdio.h>
// int main()
// {
// 	int fahr;
// 	for(fahr = 0; fahr<=300; fahr = fahr + 20){
// 		printf("%3d\t%6.1f\n", fahr, 5.0 / 9.0 * (fahr - 32));
// 	}
// }

// #include <stdio.h>

// #define LOWER 0
// #define UPPER 300
// #define STEP 20

// int main(){
// 	int fahr;
// 	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
// 		printf("%3d\t%6.3f\n", fahr, (5.0/9.0)*(fahr-32));
// 	}
// }

// #include <stdio.h>

// int main()
// {
// 	int c;
// 	c = getchar();
// 	while(c != EOF)
// 	{
// 		putchar(c);
// 		c = getchar();
// 	}
// }

// example 1-6
// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", (getchar()!=EOF));
// }


// example 1-7
// #include <stdio.h>

// int main()
// {
// 	printf("%d\n", EOF);
// }

// count
// #include <stdio.h>
// int main()
// {
// 	int nl, c;
// 	nl = 0;

// 	while((c = getchar()) != EOF)
// 	{
// 		printf("%c", c);
// 		if(c == '\n')
// 		{
// 			++nl;
// 		}
// 	printf("%d\n", nl);		
// 	}

// }

//example 1-8
// #include <stdio.h>

// int main()
// {
// 	int nextLineCount = 0;
// 	int tabCount = 0;
// 	int spaceCount=0;
// 	int c;

// 	while((c=getchar()) != EOF){
// 		if(c == '\n')
// 			++nextLineCount;
// 		if(c == '\t')
// 			++tabCount;
// 		if(c == ' ')
// 			++spaceCount;
// 		putchar(c);
// 	printf("Next line count is: %d\n Tab count is: %d\n Space count is:%d\n", nextLineCount, tabCount, spaceCount);
// 	}
// }

//word count
// #include <stdio.h>
// #define IN 1
// #define OUT 0

// int main(){
// 	int c, nl, nw, nc, state;
	
// 	state = OUT;
// 	nl = nw = nc = 0;
// 	while( (c = getchar()) != EOF)
// 	{
// 		++nc;
// 		if(c == '\n')
// 			++nl;
// 		if(c == ' ' || c == '\n' || c=='\t')
// 			state = OUT;
// 		else if(state == OUT){
// 			state = IN;
// 			++nw;
// 		}
// 	// printf("%d", nw);
// 	}
// 	printf("%d", nw);
// }


//example 1-13编写一个程序，打印输入单词长度的直方图，水平方向的直方图表容易，处置方向的直方图困难些
// #include <stdio.h>
// int main()
// {
// 	int c, i, x, nwhite, nother;
// 	int ndigit[10];

// 	nwhite = nother = 0;
// 	for(i=0;i<10;i++){
// 		ndigit[i]=0;
// 	}
// 	while((c=getchar()) != EOF){
// 		if(c >= '0' && c <= '9')
// 			++ndigit[c-'0'];
// 		else if(c==' ' || c== '\t' || c== '\n')
// 			++nwhite;
// 		else
// 			++nother;
	
// 	printf("Digits = \n");
// 	for(i = 0; i< 10 ;++i){
// 		printf(" [%d] ", i);
// 		for (x=0 ; x<=ndigit[i]; x++){
// 			if(x==ndigit[i]){
// 				printf("|%d\n",ndigit[i]);

// 			}else{
// 				printf ("-");
// 			}
// 		}
// 	}
// 	printf("whitespace = %d; otherword = %d\n", nwhite, nother);	
// 	}
// }


#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char num[105][105] = {0};
//	int m, n;
//	scanf("%d %d", &m, &n);
//	for (int i = 1; i <= m; i++) {
//		for (int j = 1; j <= n; j++) {
//			scanf(" %c", &num[i][j]);
//		}
//	}
//	for (int i = 1; i <= m; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (num[i][j] == '*') {
//				printf("*");
//				continue;
//			}
//			int count=0;
//			if (num[i - 1][j - 1] == '*')count++;
//			if (num[i - 1][j ] == '*')count++;
//			if (num[i - 1][j +1] == '*')count++;
//			if (num[i ][j - 1] == '*')count++;
//			if (num[i ][j + 1] == '*')count++;
//			if (num[i +1][j - 1] == '*')count++;
//			if (num[i +1][j ] == '*')count++;
//			if (num[i +1][j + 1] == '*')count++;
//			printf("%d", count);
//		}
//		printf("\n");
//	}
//	return 0;
//}
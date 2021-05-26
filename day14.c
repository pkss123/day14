#include<stdio.h>

int main() {

	/*
		다차원 배열
		 배열은 데이터의 집합체, 일자로 늘어져 있는 형태
		  > 데이터가 많아지면 index를 이용한 탐색이 오래 걸린다
		 배열을 단순히 일자로 사용하는 것이 아니라 입체적으로 사용할 수 있도록 하는 배열
	
		2차원 배열
		 배열 내부의 데이터를 단순히 일자로만 나열하는 것이 아니라 가로와 세로로 나눠서 나열
	*/

	//int ar1[2][3];		// ar1 선언, 배열명[행][열]
	//ar[0][1] = 7;		// ar1		 [0]열 [1]열 [2]열
						// [0행]	|  ?  |  7  |  ?  |
						// [1행]	|  ?  |  ?  |  ?  |

	//int ar2[2][3] = { 1,2,3,4,5,6 };		// 선언과 동시에 초기화
											// 데이터가 0행 0열부터 순서대로 입력
											// ar2		 [0]열 [1]열 [2]열
											// [0행]	|  1  |  2  |  3  |
											// [1행]	|  4  |  5  |  6  |

	//int ar3[2][3] = { {1,2,3},{4,5,6} };
	//					0행		1행		<< 하나의 행을 중괄호로 묶어준다
	//int ar4_1[2][3] = { 1,2,4 };
	//int ar4_2[2][3] = { {1,2},{4} };

	//int ar6[][3] = { {1,2},{4}};
	//
	//printf("ar6 주소 : %p\n", ar6);
	//printf("ar6 의 전체 크기 : %d byte\n", sizeof(ar6));
	//printf("ar6[0] 행 주소 : %p\n", ar6[0]);
	//printf("ar6[1] 행 주소 : %p\n", ar6[1]);
	//printf("ar6 내부 한 개 행의 크기 : %d\n", size9f(ar6[0]));

	//// 2차원 배열의 행의 개수 = 배열 전체 크기 / 한 행의 크기
	//int ar6R = sizeof(ar6) / sizeof(ar6[0]);
	//// 2차원 배열의 열의 개수 =  한 행의 크기 / 자료형의 크기
	//int ar6C = sizeof(ar6[0]) / sizeof(int);
	//printf("ar6 : %d 행, %d 열\n", ar6R, ar6C);
	//puts("");

	//// 2차원 배열의 전체 요소 확인(반복문 사용)

	//for (int i = 0; i < ar6R; i++) {
	//	printf("ar6[%d] 행 : ", i);
	//	for (int j = 0; j < ar6C; j++) {
	//		printf("%d ", ar6[i][j]);
	//	}
	//	puts("");
	//}
	
	//int point[][5] = { {5,2,8,7,1},{6,4,9,5,3} };
	//int R = sizeof(point) / sizeof(point[0]);
	//int C = sizeof(point[0]) / sizeof(int);
	//int sum = 0;
	//int Ssum[2] = { 0 };

	//for (int i = 0; i < R; i++) {
	//	for (int j = 0; j < C; j++) {
	//		sum += point[i][j];
	//		Ssum[i] += point[i][j];
	//	}
	//	printf("%d 행별 데이터의 합 : %d\n", i, Ssum[i]);
	//}
	//printf("전체 데이터 합 : %d\n", sum);

	int gu[9][9] = { 0 };

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			gu[i][j] = (i + 1) * (j + 1);
		}
	}
	for (int i = 0; i < 9; i++) {
		printf("%d단 결과 :", i + 1);
		for (int j = 0; j < 9; j++) {
			printf("%3d", gu[i][j]);
		}
		puts("");
	}

}
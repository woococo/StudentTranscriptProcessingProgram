#include <stdio.h>

int main()
{
	int score[21][10] = {0}; 			// score[학생번호][과목번호] ==> 모든 점수 저장 
	int sum[21] = {0};					// sum[학생번호] ==> 학생번호 별 과목 총점 
	int ave[21] = {0};					// ave[학생번호] ==> 학생번호 별 과목 평균 
	int subjectSum[10] = {0};			// subjectSum[과목번호] ==> 과목 별 총점 
	float subjectAve[10] = {0};			// subjectAve[과목번호] ==> 과목 별 평균 

	int studentCount = 0;
	int subjectCount = 0;
	
	printf("학생 수 입력 : ");		// 학생 수 입력 
	scanf("%d", &studentCount);
	
	printf("과목 수 입력 : ");		// 과목 수 입 
	scanf("%d", &subjectCount);
	
	for(int index = 0; index < studentCount; index++){
		printf("koposw%d 학생의 점수 %d개를 차례대로 입력하세요. :", index + 1, subjectCount);
		for(int index2 = 0; index2 < subjectCount; index2++){
			scanf("%d", &score[index][index2]);
		}
	}
	
	for(int index = 0; index < studentCount; index++){
		int sum = 0;
		float ave = 0;
		for(int index2 = 0; index2 < subjectCount; index2++){
			sum += score[index][index2];
			subjectSum[index2] += score[index][index2];
		}

		ave = sum / (float)subjectCount;
		printf("koposw%d학생의 과목 총점은 %d점, 평균은 %5.2f입니다.\n", index + 1, sum, ave);	
	}
	
	for(int index = 0; index < subjectCount; index++){
		subjectAve[index] = subjectSum[index] / (float)studentCount;
		printf("과목%d의 평균 %5.2f\n", index + 1, subjectAve[index]);
	}
	
	return 0;
}

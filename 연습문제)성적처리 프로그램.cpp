#include <stdio.h>

int main()
{
	int score[21][10] = {0}; 			// score[�л���ȣ][�����ȣ] ==> ��� ���� ���� 
	int sum[21] = {0};					// sum[�л���ȣ] ==> �л���ȣ �� ���� ���� 
	int ave[21] = {0};					// ave[�л���ȣ] ==> �л���ȣ �� ���� ��� 
	int subjectSum[10] = {0};			// subjectSum[�����ȣ] ==> ���� �� ���� 
	float subjectAve[10] = {0};			// subjectAve[�����ȣ] ==> ���� �� ��� 

	int studentCount = 0;
	int subjectCount = 0;
	
	printf("�л� �� �Է� : ");		// �л� �� �Է� 
	scanf("%d", &studentCount);
	
	printf("���� �� �Է� : ");		// ���� �� �� 
	scanf("%d", &subjectCount);
	
	for(int index = 0; index < studentCount; index++){
		printf("koposw%d �л��� ���� %d���� ���ʴ�� �Է��ϼ���. :", index + 1, subjectCount);
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
		printf("koposw%d�л��� ���� ������ %d��, ����� %5.2f�Դϴ�.\n", index + 1, sum, ave);	
	}
	
	for(int index = 0; index < subjectCount; index++){
		subjectAve[index] = subjectSum[index] / (float)studentCount;
		printf("����%d�� ��� %5.2f\n", index + 1, subjectAve[index]);
	}
	
	return 0;
}

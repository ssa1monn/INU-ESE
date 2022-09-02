// 문제 설명
// 1학년 1반 학생 5명의 하루 용돈과
// 1학년 2반 학생 5명의 하루 용돈 데이터 총 10개가 순서대로 입력된다.
// 예
// 1000 2000 3000 4000 5000 1100 1200 1300 1400 1500
// 1, 3, 5, 7, 9번째는 1학년 1반,
// 2,4,6,8,10 번째는 1학년 2반에 해당한다. 
// 단, 실제로 입려되는 용돈값은 다를 수 있다.
// 각 반에서 용돈을 가장 많이 받는 학생과 가장 적게 받는 학생의 차이 (많은 용돈 - 적은 용돈)가
// 가장 큰 경우 얼마인가?
// (출력 끝에 줄바꿈 없음)

// 입력
// 1000 2000 3000 4000 5000 1100 1200 1300 1400 1500

// 출력
// 4000

int main(void)
{
	int a[5], b[5];
	scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &b[0], &a[1], &b[1], &a[2], &b[2], &a[3], &b[3], &a[4], &b[4]);

	int amax = a[0];
	int amin = a[0];
	for (int i = 0; i < 5; i++)
	{
		if (a[i] > amax) amax = a[i];
		if (a[i] < amin) amin = a[i];
	}

	int bmax = b[0];
	int bmin = b[0];
	for (int n = 0; n < 5; n++)
	{
		if (b[n] > bmax) bmax = b[n];
		if (b[n] < bmin) bmin = b[n];
	}

	if ((amax - amin) > (bmax - bmin))
		printf("%d", amax - amin);
	else
		printf("%d", bmax - bmin);

	return 0;
}
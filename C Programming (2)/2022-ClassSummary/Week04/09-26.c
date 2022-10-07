// 다차원 배열
//  - 다차원 배열이란? : 2차원 이상의 배열을 의미함.

// 다차원 배열의 선언
//  - int arr[100] 1차원 배열
//  - int arr[10][10] 10*10 2차원 배열
//  - int arr[5][5][5] 5*5*5 3차원 배열
// 몇 개씩의 데이터가 묶여있는지 확인 (덩어리)

// int arr[3][4];
// => [0][0], [0][1], [0][2] ~ , [3][2], [3][3], [3][4] 순서대로 컴퓨터에 저장됨.
// for loop 를 사용해서 데이터를 불러올 경우 컴퓨터는 여러개를 읽으므로 (다음 값을 예측) 처리 속도에서 차이가 날 수 있음.

// 2차원 배열
// 선언과 동시에 초기화
//  - 행 단위로 모든 요소들을 초기화
//  - 행 단위로 일부 요소들만 초기화 (빈 부분들은 0오로 초기화됨)
//  - int arr[3][3] = {1, 2, 3, 4, ~};

// 초기화 리스트에 의한 배열 크기의 결정
//  - 1차원 배열에서 : int arr[] = {1, 2, 3} // OK
//  - 2차원 배열에서 : int arr[][] = {1, 2, 3, 4} // Error
//                     int arr[][4] = {1, 2, 3, 4} //OK
//  - 뒤가 아닌 앞을 비운다면?

// 3차원 배열의 선언과 의미
//  - 3차원적 메모리 구조를 의미함
//  - 일반적으로 자주 쓰지는 않음
//  - 4차원 이상은 주로 사용하지 않음.
//  - 그러나 물리적 배치와 각 주소의 표현 방법은 정확하게 알고 있어야 한다.

// int i[3][4] = {100, 200, 300, 400, 500, }
// 첫번째 숫자의 주소가 1000일 때,
//  - i = 1000 이다. (주소, 상수)
//  - 첫번째 덩어리의 주소를 나타낸다. (3개중 첫째)
//  - i는 포인터 상수이다. (변경 불가, 할당 받음)
//  - i + 1 = 1016
//  - 배열에서 값 자체가 주소인데 다시 &를 사용하는 것은 바깥쪽 덩어리를 나타낸다.
//  - &i[0]는 [0]의 주소, 즉 i와 같다.

//  - 4 바이트. [3] [4]
//  - 배열의 주소에 또 주소를 붙이면 바깥쪽 덩어리 주소를 나타냄
//  - i + 1 = 첫번째 덩어리 다음의 덩어리 시작주소. +16
//  - &i = 첫번째 덩어리의 바깥쪽이므로 배열 전체의 시작 주소.
//  - &i + 1 = 배열 전체의 다음 주소. +48
//  - i[0] 첫번쨰 덩어리 내에서 다시 첫번쨰, i[1] = i[1][0], i[2] = i[2][0]
//  - i[0] + 1 = i[0][1], 첫번쨰 덩어리 내에서 다시 첫번쨰의 다음. +4

//  - &는 바깥쪽. &i는 i[0]의 바깥쪽이므로 배열의 시작 주소.
//  - &i[0] 은 i[0][0]의 바깥주소이므로 i[0]의 시작 주소. &와 []이 상쇄됨. = i
//  - &i[0] + 1 = i + 1 = 16
//  - &i[2] + 1 = i의 네번째 덩어리. 존재하진 않지만 c언어는 상관없이 계산함. = 48
//  - &i[0][0] + 1, i[0][0]은 주소가 아닌 데이터. 따라서 &i[0][0]은 그것의 주소를 의미함. +4
//  - i[0][0]을 출력하면 데이터이므로 그 값이 출력됨.

// 상수인 것과 변수인 것
//  - 2차원 배열에서 모든 주소는 상수이다. (다차원 배열은 모두 동일)
//  - int i[][]의 정의에서 [][] 형태인 것만 int 값이고, 나머지는 주소를 의미함.
//   ex) i, i[0] 모두 주소
//  - printf("%p", i + 1); 은 맞지만, printf("%p", i++); 는 틀렸다.
//   i + 1은 그 값을 계산만 하고 i에 저장하지 않음. 하지만 i++는 그 값을 i에 저장하려함. 하지만 i는 상수(주소) 이므로 변경 불가능.
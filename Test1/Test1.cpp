//#include <iostream>
//using namespace std;
//
//static int NumGames = 0;
//static int NumWins = 0;
//static double score1, score2 = 0;
//static double tEclapsed = 0;
//
//bool playGuguOnce()
//{
//	int a = rand() % 8 + 2;
//	int b = rand() % 8 + 2;
//	int result;
//
//	NumGames++;
//	cout << "문제 " << NumGames << ": " << a << "x" << b << "=";
//	cin >> result;
//	if (result == a * b)NumWins++;
//	return (result == a * b);
//}
//
//double playSpeedGugu(int n)
//{
//	clock_t t0 = clock();
//	for (int i = 0; i < n; i++)
//	{
//	score1:(playGuguOnce() ? score1 += 100 : printf("\n 틀렸습니다.\n"));
//	}
//	clock_t t1 = clock();
//	tEclapsed = (double)(t1 - t0) / CLOCKS_PER_SEC;
//	score2 = score1 / tEclapsed;
//	return score2;
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//	int nplay = 10;
//	cout << "[스피드 구구단 게임]" << endl << endl;
//	cout << "당신의 구구단 실력을 테스트하세요.\n" << nplay << "번 테스트 하겠습니다";
//	cout << "준비되면 엔터를 누르세요.\n";
//	getchar();
//	system("cls");
//
//	double score = playSpeedGugu(nplay);
//	cout << "점수는" << score << " , 사용 시간은 " << tEclapsed << "초입니다.";
//	return 0;
//}
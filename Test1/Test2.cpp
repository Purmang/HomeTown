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
//	cout << "���� " << NumGames << ": " << a << "x" << b << "=";
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
//		if (playGuguOnce)
//			score1 += 100;
//		else cout << "\n Ʋ�Ƚ��ϴ�.\n";
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
//	cout << "[���ǵ� ������ ����]" << endl << endl;
//	cout << "����� ������ �Ƿ��� �׽�Ʈ�ϼ���.\n" << nplay << "�� �׽�Ʈ �ϰڽ��ϴ�";
//	cout << "�غ�Ǹ� ���͸� ��������.\n";
//	getchar();
//	system("cls");
//
//	double score = playSpeedGugu(nplay);
//	cout << "������" << score << " , ��� �ð��� " << tEclapsed << "���Դϴ�.";
//	return 0;
//}

#include<stdio.h>

typedef struct {
	int sum, goal;

}Calculate;

int main();

Calculate cal(int, int, int, int);


int main()
{

	
	int win[100], lose[100], tie[100], score[100], concede[100];
	char team1[100], team2[100];
	Calculate k[3];

	printf("Enter Your Team1 Name : ");
	gets_s(team1);
	printf("Enter Your Team2 Name : ");
	gets_s(team2);

	printf("Enter \"win lose tie score concede\" (follow this example)\n1 2 3 4 5\n4 5 6 7 8\n\nEnter yours\n");

	for (int i = 1; i <= 2; i++)
	{
		scanf_s("%d %d %d %d %d", &win[i], &lose[i], &tie[i], &score[i], &concede[i]);
		getchar();
		k[i] = cal(win[i], tie[i], score[i], concede[i]);
	}
	if (k[1].sum > k[2].sum)
	{
		printf("\n\nteam : %s score = %d goal = %d\nteam : %s score = %d goal = %d", team1, k[1].sum, k[1].goal, team2, k[2].sum, k[2].goal);
	}
	else if (k[2].sum > k[1].sum)
	{
		printf("\n\nteam : %s score = %d goal = %d\nteam : %s score = %d goal = %d", team2, k[2].sum, k[2].goal, team1, k[1].sum, k[1].goal);

	}
	else if (k[1].sum == k[2].sum)
	{
		if (k[1].goal > k[2].goal)
		{
			printf("\n\nteam : %s score = %d goal = %d\nteam : %s score = %d goal = %d", team1, k[1].sum, k[1].goal, team2, k[2].sum, k[2].goal);

		}
		else if (k[1].goal < k[2].goal)
		{
			printf("\n\nteam : %s score = %d goal = %d\nteam : %s score = %d goal = %d", team2, k[2].sum, k[2].goal, team1, k[1].sum, k[1].goal);

		}
		else if (k[1].goal == k[2].goal)
		{
			printf("\n\nTIE\n");
			printf("team : %s score = %d goal = %d\nteam : %s score = %d goal = %d", team1, k[1].sum, k[1].goal, team2, k[2].sum, k[2].goal);

		}

	}



}


Calculate cal(int win, int tie, int score, int concede)
{
	Calculate p;
	p.sum = (win * 3) + (tie * 1);
	p.goal = score - concede;

	return p;
}

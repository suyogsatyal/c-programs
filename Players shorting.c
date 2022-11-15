/*
Topic:WAP to store the player name, runs scored, wicket taken of noofplayers cricketers
using structure then arrange the players in order of maximum wicket to
minimum wicket they had taken.
*/
#include<stdio.h>
#include<stdlib.h>
struct structure
{
	char name[20];
	char surname[20];
	int runs;
	int wickets;
};
void main()
{
	int noofplayers=20, i;
	struct structure players[noofplayers];
	for(i=0;i<noofplayers;i++)
	{
		printf("Enter name: ");
		scanf("%s %s", &players[i].name, &players[i].surname);
		printf("Enter runs: ");
		scanf("%d", &players[i].runs);
		printf("Enter wickets: ");
		scanf("%d", &players[i].wickets);
		printf("\n");
	}
	sortplayers(players);
	printf("\nPlayers status\n\n");
	for (i=0;i<noofplayers;i++)
	{
		printf("Name: %s %s\n",players[i].name, players[i].surname);
		printf("Runs: %d\n", players[i].runs);
		printf("Wickets:%d\n\n", players[i].wickets);
	}
}
void sortplayers(struct structure players[20])
{
	int i, j, noofplayers=2;
	struct structure temp;
	for (i=0; i<noofplayers-1; i++)
	{
		for (j=i+1; j<noofplayers; j++)
		{
			if (players[j].wickets>players[i].wickets)
			{
				temp.wickets=players[j].wickets;
				players[j].wickets=players[i].wickets;
				players[i].wickets=temp.wickets;
			}
		}
	}
}

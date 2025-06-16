#include <stdio.h>
#include <string.h>

#define max 50
struct cricket
{
  char player_name[100];
  char team_name[100];
  float batting_average;
};
void sort_by_batting_average(struct cricket players[], int n)
{
  struct cricket temp;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (players[i].batting_average < players[j].batting_average)
      {
        temp = players[i];
        players[i] = players[j];
        players[j] = temp;
      }
    }
  }
}
int main()
{
  struct cricket players[max];
  int n, i;
  printf("Enter the number of players (up to 50): ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("\nEnter details for player %d:\n", i + 1);

    printf("Player's Name: ");
    scanf(" %[^\n]%*c", players[i].player_name);

    printf("Team's Name: ");
    scanf(" %[^\n]%*c", players[i].team_name);

    printf("Batting Average: ");
    scanf("%f", &players[i].batting_average);
  }
  sort_by_batting_average(players, n);
  printf("\nPlayers sorted by batting average:\n");
  for (i = 0; i < n; i++)
  {
    printf("Player: %s | Team: %s | Batting Average: %.2f\n", players[i].player_name, players[i].team_name, players[i].batting_average);
  }
  return 0;
}

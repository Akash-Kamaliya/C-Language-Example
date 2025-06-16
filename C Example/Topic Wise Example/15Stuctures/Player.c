#include <stdio.h>
struct cricket
{
  char player_name[100];
  char team_name[100];
  float batting_average;
};
int main()
{
  struct cricket player;
  printf("Enter player's name: ");
  scanf(" %[^\n]%*c", player.player_name);
  printf("Enter team's name: ");
  scanf(" %[^\n]%*c", player.team_name);
  printf("Enter batting average: ");
  scanf("%f", &player.batting_average);
  printf("\nPlayer Information:\n");
  printf("Player Name: %s\n", player.player_name);
  printf("Team Name: %s\n", player.team_name);
  printf("Batting Average: %.2f\n", player.batting_average);
  return 0;
}

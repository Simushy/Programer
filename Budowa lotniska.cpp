#include <iostream>
#include <math.h>
#include <string>
using namespace std;


int n;
int m;
int tmp = 0;
int max_length;
int tracks_found = 0;
int max_tmp;
string airport;
char direction;
int tmp_coords[2];
void show(char** LOTNISKO) {
	cout << '\n';
	for (int i = 0; i <= n - 1; i++)
	{
		for (int j = 0; j <= n - 1; j++)
		{
			cout << LOTNISKO[j][i];
		}
		cout << '\n';
	}
}

void insert(char** LOTNISKO) {
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> airport;
		for (int j = 0; j <= n - 1; j++)
		{
			LOTNISKO[j][i] = airport[j];
		}
	}
}

int check_maxlength(char** LOTNISKO) {

	for (int i = 0; i <= n - 1; i++)
	{
		tmp = 0;
		for (int j = 0; j <= n - 1; j++)
		{
			if (LOTNISKO[j][i] != '.') {
				tmp = 0;
				continue;
			}
			if (LOTNISKO[j][i] == '.')
				tmp++;
			if (tmp > max_length)
			{
				max_length = tmp;
				direction = 'h';
				//horizontal
				tmp_coords[0] = j;
				tmp_coords[1] = i;
			}
		}
	}

	for (int i = 0; i <= n - 1; i++)
	{
		tmp = 0;
		for (int j = 0; j <= n - 1; j++)
		{
			if (LOTNISKO[i][j] != '.') {
				tmp = 0;
				continue;
			}
			if (LOTNISKO[i][j] == '.')
				tmp++;
			if (tmp > max_length)
			{
				max_length = tmp;
				direction = 'v';
				//vertical
				tmp_coords[0] = i;
				tmp_coords[1] = j;
			}
		}
	}
	tracks_found = 1;
	return max_length;
}

/*/int check_horizontal() {

}
int check_vertical() {

}*/

int main() {
	cin >> n;
	cin >> m;
	char** LOTNISKO = new char* [n];
	for (int i = 0; i < n; i++)
		LOTNISKO[i] = new char[n];
	insert(LOTNISKO);
	check_maxlength(LOTNISKO);
	//wyswietl();
	cout << direction << '\n';
	cout << max_length << "\n\n";
	cout << tmp_coords[0] << " " << tmp_coords[1] << '\n';

	cout << "\n";

}

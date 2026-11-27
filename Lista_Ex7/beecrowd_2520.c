#include <stdio.h>
#include <stdlib.h>

int main() {

int matriz[101][101];
int i, j, m, n, distancia;
int eu_linha, eu_coluna, pokemon_linha, pokemon_coluna;

	while (scanf("%d %d", &m, &n) == 2) {

		eu_linha = eu_coluna = pokemon_linha = pokemon_coluna = 0;

		for (i = 0; i < m; i++) {

			for (j = 0; j < n; j++) {

				scanf("%d", &matriz[i][j]);

				if (matriz[i][j] == 1)
					eu_linha = i, eu_coluna = j;

				else if (matriz[i][j] == 2)
					pokemon_linha = i, pokemon_coluna = j;

			}

        }

		distancia = abs(eu_linha - pokemon_linha) + abs(eu_coluna - pokemon_coluna);

		printf("%d\n", distancia);

	}

	return 0;
}
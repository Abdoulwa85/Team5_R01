#include <stdio.h>

// ====== CALCULATRICE ========
void calculatrice() {
    double num1, num2;
    char operator;

    printf("\n=== CALCULATRICE ===\n");
    printf("Entrez deux nombres et un opérateur (ex : 5 + 3) : ");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    if (operator == '+') {
        printf("Résultat : %.2lf\n", num1 + num2);
    } else if (operator == '-') {
        printf("Résultat : %.2lf\n", num1 - num2);
    } else if (operator == '*') {
        printf("Résultat : %.2lf\n", num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("Résultat : %.2lf\n", num1 / num2);
        } else {
            printf("Erreur : division par zéro.\n");
        }
    } else {
        printf("Opérateur invalide.\n");
    }
}

// ====== NOMBRE PREMIER ======
void verifier_nombre_premier() {
    int n, i, est_premier = 1;

    printf("\n=== NOMBRE PREMIER ===\n");
    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d n'est pas un nombre premier.\n", n);
        return;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            est_premier = 0;
            break;
        }
    }

    if (est_premier)
        printf("%d est un nombre premier.\n", n);
    else
        printf("%d n'est pas un nombre premier.\n", n);
}

// ====== SUITE DE FIBONACCI ======
void fibonacci(int n) {
    long long a = 0, b = 1, temp;

    printf("Suite de Fibonacci jusqu'à %d termes :\n", n);
    for (int i = 0; i < n; i++) {
        printf("%lld ", a);
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
}

// ====== FACTORIELLE =======
void calcul_factorielle() {
    int n;
    long long f = 1;

    printf("\n=== FACTORIELLE ===\n");
    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erreur : nombre négatif.\n");
        return;
    }

    for (int i = 1; i <= n; i++)
        f *= i;

    printf("Factorielle = %lld\n", f);
}

// ====== MENU PRINCIPAL ======
int main() {
    int choix;

    do {
        printf("soyez le bienvenu, faite un choix :\n");
        printf("1. Calculatrice\n");
        printf("2. Vérifier un nombre premier\n");
        printf("3. Suite de Fibonacci\n");
        printf("4. Factorielle\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                calculatrice();
                break;
            case 2:
                verifier_nombre_premier();
                break;
            case 3: {
                int n;
                printf("Combien de termes voulez-vous ? ");
                scanf("%d", &n);
                if (n > 0)
                    fibonacci(n);
                else
                    printf("Erreur : nombre invalide.\n");
                break;
            }
            case 4:
                calcul_factorielle();
                break;
            case 0:
                printf("Merci d'avoir utilisé notre programme Team5_rush01 \n");
               break;
            default:
                printf("Choix invalide. Réessayez.\n");
        }

    } while (choix != 0);

    return 0;
}

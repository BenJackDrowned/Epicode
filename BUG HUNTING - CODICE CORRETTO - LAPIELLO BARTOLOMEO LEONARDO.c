#include <stdio.h>

void menu();
void moltiplica();
void dividi();
void ins_string();

int main()
{
    char scelta = '\0';
    menu();
    scanf("%c", &scelta);

    switch (scelta)
    {
        case 'A':
            moltiplica();
            break;
        case 'B':
            dividi();
            break;
        case 'C':
            ins_string();
            break;
    }

    return 0;
}

void menu()
{
    printf("Benvenuto, sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti\n");
    printf("Come posso aiutarti?\n");
    printf("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");
}

void moltiplica()
{
    int a, b;
    printf("Inserisci i due numeri da moltiplicare: ");
    scanf("%d %d", &a, &b);

    int prodotto = a * b;

    printf("Il prodotto tra %d e %d è: %d\n", a, b, prodotto);
}

void dividi()
{
    int a, b;
    printf("Inserisci il numeratore: ");
    scanf("%d", &a);
    printf("Inserisci il denominatore: ");
    scanf("%d", &b);

    if (b != 0)
    {
        int divisione = a / b;
        printf("La divisione tra %d e %d è: %d\n", a, b, divisione);
    }
    else
    {
        printf("Errore: divisione per zero non consentita.\n");
    }
}

void ins_string()
{
    char stringa[100];
    printf("Inserisci la stringa: ");
    scanf("%s", stringa);
}


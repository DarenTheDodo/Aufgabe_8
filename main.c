// cgrahl3s ; kzande3s
// es wird eine Schleife erstellt, die das Spiel beendet, wenn man das Hangman Spiel gewinnt oder verloren hat
// Test:  1 1 1 1 1 1 1 1
// Ergebnis: Abbruch der Schleife => funktioniert
#include <stdio.h>

int main() {
    int fehler = 0;
    int rateVersuche = 8;
    int richtigGeraten = 0;
    int anzahlBuchstaben = 6;
    int eingabe;
    //Schleife
    while (fehler != rateVersuche && richtigGeraten != anzahlBuchstaben) {
        scanf("%i", &eingabe);

        switch (eingabe) {
            case 1:
                fehler++;
                break;
            case 2:
                richtigGeraten++;
                break;
            default:
                break;
        }

    }
    return 0;
}

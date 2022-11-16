#include <stdio.h>
#include <string.h>

int main() {
    int i;
    char str1[81]; /* Eingabestring */
    char str2[81]; /* Ausgabestring */
    char *p1, *p2;

    printf("Bitte ein Wort eingeben: ");
    scanf("%s", str1);

    /* soll nur eine Ausgabe erfolgen, geht dies auch ohne str2 und zwar wie folgt: */
    printf("So soll das Ergebnis aussehen: ");
    for (i = strlen(str1) - 1; i >= 0; i--) printf("%c", str1[i]);

    /* nunmit Kopie in str2: */
    p1 = &str1[0] + strlen(str1) - 1; /* p1 zeigt auf das Ende von str1 */
    p2 = &str2[0]; /* p2 zeigt auf den Anfang von str2 */

    /* von hinten nach vorn wird str1 zeichenweise nach str2 kopiert */
    while (p1 >= &str1[0]){
        *p2++ = *p1--;
    }

    *p2 = '\0'; /* str2 String-Endezeichen abschliessen */

    /* Ausgabe beider Strings */
    printf("\n%s <--> %s\n", str1, str2);

    return 0;
}
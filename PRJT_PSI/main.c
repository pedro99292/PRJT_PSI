#include <stdio.h>
#include <stdlib.h>
#include <conio.c>
#include "login.h"
#include "menuprincipal.h"
#include <locale.h>



int main()
{
    setlocale(LC_ALL,"Portuguese");

textcolor(BLUE);
printf(R"EOF(

                        FFFFFFFFFFFFFFFFFFFFFIIIIIIIIITTTTTTTTTTTTTTTTTTTTTTNNNNNNNN        NNNNNNNEEEEEEEEEEEEEEEEEEEEEE  SSSSSSSSSSSSSSS   SSSSSSSSSSSSSSSBBBBBBBBBBBBBBBBB  RRRRRRRRRRRRRRRRR       OOOOOOOOO
                        F::::::::::::::::::::I::::::::T:::::::::::::::::::::N:::::::N       N::::::E::::::::::::::::::::ESS:::::::::::::::SSS:::::::::::::::B::::::::::::::::B R::::::::::::::::R    OO:::::::::OO
                        F::::::::::::::::::::I::::::::T:::::::::::::::::::::N::::::::N      N::::::E::::::::::::::::::::S:::::SSSSSS::::::S:::::SSSSSS::::::B::::::BBBBBB:::::BR::::::RRRRRR:::::R OO:::::::::::::OO
                        FF::::::FFFFFFFFF::::II::::::IT:::::TT:::::::TT:::::N:::::::::N     N::::::EE::::::EEEEEEEEE::::S:::::S     SSSSSSS:::::S     SSSSSSBB:::::B     B:::::RR:::::R     R:::::O:::::::OOO:::::::O
                          F:::::F       FFFFFF I::::I TTTTTT  T:::::T  TTTTTN::::::::::N    N::::::N E:::::E       EEEEES:::::S           S:::::S             B::::B     B:::::B R::::R     R:::::O::::::O   O::::::O
                          F:::::F              I::::I         T:::::T       N:::::::::::N   N::::::N E:::::E            S:::::S           S:::::S             B::::B     B:::::B R::::R     R:::::O:::::O     O:::::O
                          F::::::FFFFFFFFFF    I::::I         T:::::T       N:::::::N::::N  N::::::N E::::::EEEEEEEEEE   S::::SSSS         S::::SSSS          B::::BBBBBB:::::B  R::::RRRRRR:::::RO:::::O     O:::::O
                          F:::::::::::::::F    I::::I         T:::::T       N::::::N N::::N N::::::N E:::::::::::::::E    SS::::::SSSSS     SS::::::SSSSS     B:::::::::::::BB   R:::::::::::::RR O:::::O     O:::::O
                          F:::::::::::::::F    I::::I         T:::::T       N::::::N  N::::N:::::::N E:::::::::::::::E      SSS::::::::SS     SSS::::::::SS   B::::BBBBBB:::::B  R::::RRRRRR:::::RO:::::O     O:::::O
                          F::::::FFFFFFFFFF    I::::I         T:::::T       N::::::N   N:::::::::::N E::::::EEEEEEEEEE         SSSSSS::::S       SSSSSS::::S  B::::B     B:::::B R::::R     R:::::O:::::O     O:::::O
                          F:::::F              I::::I         T:::::T       N::::::N    N::::::::::N E:::::E                        S:::::S           S:::::S B::::B     B:::::B R::::R     R:::::O:::::O     O:::::O
                          F:::::F              I::::I         T:::::T       N::::::N     N:::::::::N E:::::E       EEEEEE           S:::::S           S:::::S B::::B     B:::::B R::::R     R:::::O::::::O   O::::::O
                        FF:::::::FF          II::::::II     TT:::::::TT     N::::::N      N::::::::EE::::::EEEEEEEE:::::SSSSSSS     S:::::SSSSSSS     S:::::BB:::::BBBBBB::::::RR:::::R     R:::::O:::::::OOO:::::::O
                        F::::::::FF          I::::::::I     T:::::::::T     N::::::N       N:::::::E::::::::::::::::::::S::::::SSSSSS:::::S::::::SSSSSS:::::B:::::::::::::::::BR::::::R     R:::::ROO:::::::::::::OO
                        F::::::::FF          I::::::::I     T:::::::::T     N::::::N        N::::::E::::::::::::::::::::S:::::::::::::::SSS:::::::::::::::SSB::::::::::::::::B R::::::R     R:::::R  OO:::::::::OO
                        FFFFFFFFFFF          IIIIIIIIII     TTTTTTTTTTT     NNNNNNNN         NNNNNNEEEEEEEEEEEEEEEEEEEEEESSSSSSSSSSSSSSS   SSSSSSSSSSSSSSS  BBBBBBBBBBBBBBBBB  RRRRRRRR     RRRRRRR    OOOOOOOOO)EOF");

printf("\n\n\n\n\n");
textcolor(WHITE);



printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
textcolor(CYAN);
printf("\nBem vindo ao sistema de Login.");
printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
menu();


    return 0;
}

#ifndef MENUPRINCIPAL_H_INCLUDED
#define MENUPRINCIPAL_H_INCLUDED

int a,peso,b;
float calorias,proteina,gorduras,hidratos;
char alimento[30];
char banana;
void menupri()
{
    FILE *ficheiro;
    do
    {
printf("1-Pesquisar alimentos\n2-Ver diario\n");
scanf("%i",&a);

switch(a)
{
    case 1:
        printf("Banana \nMaçã \nPerâ \nMelancia \nAbacate \nLaranja\nOvos\nCarne bovina\nPeitos de frango\nCordeiro\nAmêndoas\nCocos\nAmendoins\nAspargos\nPimentão\nBrócolos\nCenouras\nCouve-flor\nPepino\nAlho");
        printf("\nCouve \nTomates\nCebola\nSalmão\nSardinhas\nCrustáceos\nCamarão\nAtum\nArroz Integral\nAveia\nQuinoa\npães\nFeijão verde\nFeijão\nLentilhas\nQueijo\nLeite integral\nIogurte\nBatatas\nBatata-doce");
        printf("\nVinagre de maçã\nChocolate negro");

        printf ("\nDigite o alimento que deseja\n");
        scanf("%s",&alimento);

        if(alimento[30]==banana)
        {
        ficheiro = fopen ("diario","a");
        printf("PESO:");
        scanf("%i",&peso);
        fprintf(ficheiro,"%s %ig\n",alimento,peso);
        system("cls");
        calorias=0.89*peso;
        proteina=0.0109*peso;
        gorduras=0.0033*peso;
        hidratos=0.2284*peso;
        printf("                              |");
        printf("\nCalorias:%.1fcal              |\nProteina:%.1fg                 |\nGorduras:%.1fg                 |\nHidratos de Carbono:%.1fg     |\n",calorias,proteina,gorduras,hidratos);
        printf("______________________________|\n");


        }





        break;
    case 2:
        break;
}

printf("1-Continuar\n2-Sair\n-->");
scanf("%i",&b);

     }while(b==2);
}
#endif // MENUPRINCIPAL_H_INCLUDED

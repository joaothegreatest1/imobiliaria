#include <stdio.h>

int main(void){
    
    char negocio[300];
    char tipo[300];
    char localizacao[300];
    float area;
    int desconto;
    int aumento;
    int pm;
    float preco;
    float preco_final;


    printf("IMOBILIÁRIA ENTA\n");
    printf("\nIndique o tipo de negocio\nCompra\nVenda\n");
    scanf("%s",negocio);

    if (negocio[0] == 'C' || negocio[0] == 'c')
    {
        printf("\nIndique o tipo (preço por metro quadrado)\nMORADIA-550€\nTERRENO-300€\nQUINTA-200€\nARMAZEM-600€\n");
        scanf("%s",tipo);
            if (tipo[0] == 'M' || tipo[0] == 'm')
            {
                pm = 550;
                printf("\nIndique a localizacao\nPDL\nLAGOA\nNORDESTE\n");
                scanf("%s",localizacao);
                if (localizacao[0] == 'P' || tipo[0] == 'p' )
                {
                    desconto = 0.04;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco - (preco * desconto);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);

                }else if (localizacao[0] == 'L' || tipo[0] == 'l')
                {
                    desconto = 0.03;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco - (preco * desconto);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);
                
                }else if (localizacao[0] == 'N' || tipo[0] == 'n')
                {
                    desconto = 0.3;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco - (preco * desconto);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);
                }
                
                
                
            }else if (tipo[0] == 'T' || tipo[0] == 't')
            {
                pm = 300;
                printf("\nIndique a localizacao\nPDL\nLAGOA\nNORDESTE\n");
                scanf("%s",localizacao);
                if (localizacao[0] == 'P' || tipo[0] == 'p' )
                {
                    desconto = 0.04;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco - (preco * desconto);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);

                }else if (localizacao[0] == 'L' || tipo[0] == 'l')
                {
                    desconto = 0.03;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco - (preco * desconto);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);
                
                }else if (localizacao[0] == 'N' || tipo[0] == 'n')
                {
                    desconto = 0.3;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco - (preco * desconto);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);
                }
                    
            
            
            }else if (tipo[0] == 'Q' || tipo[0] == 'q')
            {
                pm = 200;
                printf("\nIndique a localizacao\nPDL\nLAGOA\nNORDESTE\n");
                scanf("%s",localizacao);
                if (localizacao[0] == 'P' || tipo[0] == 'p' )
                {
                    desconto = 0.04;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco - (preco * desconto);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);

                }else if (localizacao[0] == 'L' || tipo[0] == 'l')
                {
                    desconto = 0.03;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco - (preco * desconto);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);
                
                }else if (localizacao[0] == 'N' || tipo[0] == 'n')
                {
                    desconto = 0.3;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco - (preco * desconto);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);
                }
            }else if (tipo[0] == 'A' || tipo[0] == 'a')
            {
                pm = 600;
                printf("\nIndique a localizacao\nPDL\nLAGOA\nNORDESTE\n");
                scanf("%s",localizacao);
                if (localizacao[0] == 'P' || tipo[0] == 'p' )
                {
                    desconto = 0.04;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco - (preco * desconto);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);

                }else if (localizacao[0] == 'L' || tipo[0] == 'l')
                {
                    desconto = 0.03;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco - (preco * desconto);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);
                
                }else if (localizacao[0] == 'N' || tipo[0] == 'n')
                {
                    desconto = 0.3;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco - (preco * desconto);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);
                }
                 
    }}
    else if(negocio[0] == 'V' || negocio[0] == 'v')
    {
        {
        printf("\nIndique o tipo (preço por metro quadrado)\nMORADIA-550€\nTERRENO-300€\nQUINTA-200€\nARMAZEM-600€\n");
        scanf("%s",tipo);
            if (tipo[0] == 'M' || tipo[0] == 'm')
            {
                pm = 550;
                printf("\nIndique a localizacao\nPDL\nLAGOA\nNORDESTE\n");
                scanf("%s",localizacao);
                if (localizacao[0] == 'P' || tipo[0] == 'p' )
                {
                    aumento = 0.05;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco + (preco * aumento);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);

                }else if (localizacao[0] == 'L' || tipo[0] == 'l')
                {
                    aumento = 0.02;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco + (preco * aumento);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);
                
                }else if (localizacao[0] == 'N' || tipo[0] == 'n')
                {
                    aumento = 0.01;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco + (preco * aumento);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);
                }
                
                
                
            }else if (tipo[0] == 'T' || tipo[0] == 't')
            {
                pm = 300;
                printf("\nIndique a localizacao\nPDL\nLAGOA\nNORDESTE\n");
                scanf("%s",localizacao);
                if (localizacao[0] == 'P' || tipo[0] == 'p' )
                {
                    aumento = 0.05;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco + (preco * aumento);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);

                }else if (localizacao[0] == 'L' || tipo[0] == 'l')
                {
                    aumento = 0.02;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco + (preco * aumento);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);
                
                }else if (localizacao[0] == 'N' || tipo[0] == 'n')
                {
                    aumento = 0.01;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco + (preco * aumento);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);
                }
                    
            
            
            }else if (tipo[0] == 'Q' || tipo[0] == 'q')
            {
                pm = 200;
                printf("\nIndique a localizacao\nPDL\nLAGOA\nNORDESTE\n");
                scanf("%s",localizacao);
                if (localizacao[0] == 'P' || tipo[0] == 'p' )
                {
                    aumento = 0.05;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco + (preco * aumento);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);

                }else if (localizacao[0] == 'L' || tipo[0] == 'l')
                {
                    aumento = 0.02;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco + (preco * aumento);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);
                
                }else if (localizacao[0] == 'N' || tipo[0] == 'n')
                {
                    aumento = 0.01;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco + (preco * aumento);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);
                }
            }else if (tipo[0] == 'A' || tipo[0] == 'a')
            {
                pm = 600;
                printf("\nIndique a localizacao\nPDL\nLAGOA\nNORDESTE\n");
                scanf("%s",localizacao);
                if (localizacao[0] == 'P' || tipo[0] == 'p' )
                {
                    aumento = 0.05;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco + (preco * aumento);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);

                }else if (localizacao[0] == 'L' || tipo[0] == 'l')
                {
                    aumento = 0.02;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco + (preco * aumento);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);
                
                }else if (localizacao[0] == 'N' || tipo[0] == 'n')
                {
                    aumento = 0.01;
                    printf("Indique a Área (Comprimento * Largura)\n");
                    scanf("%f",&area);

                    preco = area * pm;
                    preco_final = preco + (preco * aumento);

                    printf("-%s\n-%s\n-%s\n-PREÇO POR METRO %d\n-Area = %0.2f\n-VALOR TOTAL = %0.2f €\n",negocio,tipo,localizacao,pm,area,preco_final);
                }
                 
    }
    
        }
    return 0;
    }}
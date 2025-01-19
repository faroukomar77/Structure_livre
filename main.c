#include <stdio.h>
#include <stdlib.h>
struct Livre{
    char titre[40];
    char auteur[40];
    int anne_pub;

};
typedef struct Livre Livre ;
Livre creer_livre(){
    Livre L;
    printf("Entre le titre de livre:");
    scanf("%s",L.titre);
    printf("Entre l auteur de livre:");
    scanf("%s",L.auteur);
    printf("Entre l anne de publication:");
    scanf("%d",&L.anne_pub);
    return L;
    }
    void afficher_livre(Livre lv){
        printf("Titre:%s \n",lv.titre);
        printf("Auteur:%s \n",lv.auteur);
        printf("Annee de publication:%d \n",lv.anne_pub);

    }
    int comparer_livre(Livre lv1,Livre lv2){
        if(lv1.anne_pub<lv2.anne_pub){
            return 1;
        }
        else if(lv1.anne_pub>lv2.anne_pub){
            return -1;
        }
        else{
            return 0;
        }


    }
    Livre livre_plus_ancien(Livre lv1,Livre lv2){
        int i;
        i=comparer_livre(lv1,lv2);
        if(i==1){
            return lv1;
        }
        else if(i==-1){
            return lv2;
        }
        else{
            return lv1;
        }

    }



int main()
{
    Livre l1,l2,l_an;
    l1=creer_livre();
    l2=creer_livre();
    afficher_livre(l1);
    afficher_livre(l2);
    l_an=livre_plus_ancien(l1,l2);
    printf("Le livre le plus encien entre %s et %s est %s",l1.titre,l2.titre,l_an.titre);
    return 0;
}

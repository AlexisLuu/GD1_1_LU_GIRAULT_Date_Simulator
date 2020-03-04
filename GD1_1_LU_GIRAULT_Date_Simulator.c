#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main ()
{
  srand (time (NULL));
  int pourcentage_d_amour = 0;
  int rose = 0;
  int bouquet = 0;
  int boite_chocolat = 0;
  int eclair = 0;
  int argent = 100;
  int choix = 0;
  int choixAchat = 0;
  int choixFleurs = 0;
  int quitter = 0;
  int choixPatissier = 0;
  int choixRDV = 0;
  int compliment = 0;
  int choixRestaurant = 0;
  int choixResto = 0;
  int meteo = 0;
  int film = 0;
  int quiPaye = 0;
  int metier = 0;
  int defaite = 0;
  
  printf ("Vous vous ennuyez, vous ne souhaitez pas passer votre soirée seul, alors vous décidez d'inviter une fille à sortir. Vous avez deux choix, souhaitez-vous voir Sophie une mannequin rencontrée aux dernières vacances et qui adore les fleurs, ou bien souhaitez-vous passer votre soirée avec Marilyn une artiste rencontrée au musée et qui adore les chocolats ? \n (1) Passez votre soirée avec Sophie ? \n (2) Passez votre soirée avec Marilyn ? \n");
  scanf ("%d", &choix);
  
    if (choix == 1)
        { 
            printf ("Vous décidez d'appeler Sophie. Elle accepte le rendez-vous avec plaisir ! \n");
            while (quitter != 1)
                {
                    printf ("Vous avez %d€ sur vous, où souhaitez-vous aller ?\n(1) Chez le Fleuriste ?\n(2) Aller acheter des pâtisseries ?\n(3) Rejoindre Sophie ?\n ", argent);
                    scanf ("%d", &choixAchat);
                    
                    while (choixAchat == 1)
                        {
                            printf ("Vous êtes chez le fleuriste, que souhaitez-vous faire ?\n(1) Acheter une seule rose rouge à 3€ ?\n(2) Acheter un bouquet de roses rouges à 15€ ?\n(3) Quitter les lieux ?\n ");
                            scanf ("%d", &choixFleurs);
                            if (choixFleurs == 1 && argent < 3)
                                {
                                    printf ("Vous n'avez plus d'argent... Vous ne pouvez pas acheter cette rose rouge...\n");
                                }
                                
                            if (choixFleurs == 1 && argent>=3)
                                {
                                    printf ("Vous achetez une rose rouge au fleuriste, j'espère que ça va lui plaire !\n");
                                    rose = rose + 1;
                                    argent = argent - 3;
                                }
                                    
                            if (choixFleurs == 2 && argent < 15)
                                {
                                    printf ("Vous n'avez pas assez d'argent pour acheter ces fleurs...\n");
                                }
                                
                            if (choixFleurs == 2 && argent >= 15)
                                {
                                    printf ("Vous achetez un énorme bouquet de roses rouges au fleuriste, ça va forcément lui plaire, il est magnifique !\n");
                                    bouquet = bouquet + 1;
                                    argent = argent - 15;
                                }
                            
                            if (choixFleurs == 3)
                                {
                                    printf ("Vous quittez les lieux.\n");
                                    choixAchat = 0;
                                    printf ("Vous avez %d€ sur vous, où souhaitez-vous aller ?\n(1) Chez le Fleuriste ?\n(2) Aller acheter des pâtisseries ?\n(3) Rejoindre Sophie ?\n ", argent);
                                    scanf ("%d", &choixAchat);
                                }
                            
                            
                            
                        }
                        
                    while (choixAchat == 2)
                        {
                            printf ("Vous êtes chez le pâtissier, que souhaitez-vous faire ?\n(1) Acheter un éclair au café à 5€ ?\n(2) Acheter une boîte de chocolats à 10€ ?\n(3) Quitter les lieux ?\n ");
                            scanf ("%d", &choixPatissier);
                            if (choixPatissier == 1 && argent < 5)
                                {
                                    printf ("Vous n'avez plus d'argent... Vous ne pouvez pas acheter cet éclair au café...\n");
                                }
                                
                            if (choixPatissier == 1 && argent>=5)
                                {
                                    printf ("Vous achetez un éclair au café, il sent si bon ! J'espère qu'elle va l'aimer !\n");
                                    eclair = eclair + 1;
                                    argent = argent - 5;
                                }
                                    
                            if (choixPatissier == 2 && argent < 10)
                                {
                                    printf ("Vous n'avez pas assez d'argent pour acheter ces merveilleux chocolats...\n");
                                }
                                
                            if (choixPatissier == 2 && argent >= 10)
                                {
                                    printf ("Vous achetez une énorme boîte de chocolats, ça va forcément lui plaire, ils ont l'air si bon !\n");
                                    boite_chocolat = boite_chocolat + 1;
                                    argent = argent - 10;
                                }
                            
                            if (choixPatissier == 3)
                                {
                                    printf ("Vous quittez les lieux.\n");
                                    choixAchat = 0;
                                    printf ("Vous avez %d€ sur vous, où souhaitez-vous aller ?\n (1) Chez le Fleuriste ?\n (2) Aller acheter des pâtisseries ?\n (3) Rejoindre Sophie ?\n ", argent);
                                    scanf ("%d", &choixAchat);
                                }
                                

                        }
                    
                    if (choixAchat == 3)
                        {
                            printf ("Vous décidez de rejoindre Sophie.\n");
                            quitter = 1;
                        }
        
                }
                
                printf ("Vous voilà enfin devant Sophie !\n");
                while (quitter == 1)
                    {
                        printf ("Que souhaitez-vous faire ?\n(1) La complimenter.\n(2) Lui offrir une rose rouge.\n(3) Lui offrir un bouquet de roses rouges.\n(4) Lui offrir un éclair au café.\n(5) Lui offrir une boîte en chocolat.\n");
                        scanf("%d", &choixRDV);
                        
                        if (choixRDV == 1 && compliment == 4)
                            {
                                printf ("Bon excuse-moi mais je préfère m'en aller.. On se voit plus tard, enfin...Peut-être...\nElle est partie et ne semble ne plus vouloir nous voir...\n");
                                defaite = 1;
                            }
                        if (choixRDV == 1 && compliment == 3)
                            {
                                printf ("Bon s'il-te-plaît tu pourrais arrêter ? Je suis mal à l'aise...\nOh non je vais tout gâcher...\n");
                                compliment = compliment + 1;
                            }
                        
                        if (choixRDV == 1 && compliment == 2)
                            {
                                printf ("Merci pour tous ces compliments mais arrête tu commences à me gêner...!\nAïe on dirait qu'elle commence à ne plus trop apprécier...\n");
                                pourcentage_d_amour = pourcentage_d_amour + 5;
                                compliment = compliment + 1;
                            }
                            
                        if (choixRDV == 1 & compliment == 1)
                            {
                                printf ("Oui je me suis mise sur mon 31 ! J'ai mis du temps à me maquiller !\n");
                                printf ("Elle a apprécié le compliment !\n");
                                pourcentage_d_amour = pourcentage_d_amour + 15;
                                compliment = compliment + 1;
                            }
                            
                        if (choixRDV == 1 && compliment == 0)
                            {
                                printf ("Oui j'ai mis une robe spéciale pour l'occasion, merci de l'avoir remarquée !\n");
                                printf ("Ca lui a fait super plaisir !");
                                pourcentage_d_amour = pourcentage_d_amour + 25;
                                compliment = compliment + 1;
                            }
                            
                        if (choixRDV == 2 && rose > 0)
                            {
                                printf ("Vous lui donnez une rose rouge.\nAwww merci c'est tellement gentil ! J'adore les fleurs, comment le saviez vous ?\nIl est facile de le deviner, les fleurs attirent les belles choses...\nElle apprécie beaucoup !\n");
                                pourcentage_d_amour = pourcentage_d_amour + 20;
                                rose = rose - 1;
                            }
                            
                        if (choixRDV == 2 && rose <= 0)
                            {
                                printf ("Vous n'avez pas de roses sur vous...\n");
                            }
                            
                        if (choixRDV == 3 && bouquet > 0)
                            {
                                printf ("Vous lui donnez un bouquet de roses rouges.\nOh la la elles sont magnifiques ! Merci beaucoup beaucoup vraiment j'adore !\nWaouh elle a l'air de beaucoup aimer !\n");
                                pourcentage_d_amour = pourcentage_d_amour + 30;
                                bouquet = bouquet - 1;
                            }
                            
                        if (choixRDV == 3 && bouquet <= 0)
                            {
                                printf ("Vous n'avez pas de bouquet sur vous...\n");
                            }
                            
                        if (choixRDV == 4 && eclair > 0)
                            {
                                printf ("Vous lui donnez un eclair au cafe.\nAlors... Merci beaucoup mais en tant que mannequin je me dois de surveiller ma ligne... Désolée mais non merci !\nVous la voyez jeter votre eclair, quel gâchis !\n");
                                eclair = eclair - 1;
                                pourcentage_d_amour = pourcentage_d_amour - 5;
                            }
                            
                        if (choixRDV == 4 && eclair <= 0)
                            {
                                printf ("Vous n'avez pas d'eclair au cafe...\n");
                            }
                            
                        if (choixRDV == 5 && boite_chocolat > 0)
                            {
                                printf ("Vous lui donnez la boite aux chocolats.\nLa vision de cette chose m'attire et me degoute a la fois, desolee mais je ne peux pas accepter cette chose en tant que mannequin.\nElle detruit la boite avec ses talons, du jamais vu !\n");
                                boite_chocolat = boite_chocolat - 1;
                                pourcentage_d_amour = pourcentage_d_amour - 10;
                            }
                        
                        if (choixRDV == 5 && boite_chocolat <= 0)
                            {
                                printf ("Vous n'avez pas de boite aux chocolats...\n");
                            }
                            
                        if (pourcentage_d_amour >= 100)
                            {
                                printf ("Sophie vous dit : 'Tu me plais beaucoup ! Ca te dirait de manger avec moi au restaurant ?'\nAccepter ou refuser son offre ?\n(1) Accepter.\n(2) Refuser.\n");
                                scanf ("%d", &choixRestaurant);
                                
                                if (choixRestaurant == 1)
                                    {
                                        printf ("\nSuper ca me fait trop plaisir ! Allons-y dans ce cas !\n");
                                        quitter = 4;
                                    }
                                
                                if (choixRestaurant == 2)
                                    {
                                        printf ("Bon tant pis... J'espère que l'on se reverra dans ce cas à très bientôt !...");
                                        defaite = 1;
                                    }
                            }
                            
                        if (defaite == 1)
                            {
                              quitter = 3;  
                            }
                    }
                    
                if (quitter == 4)  
                    {
                        printf ("Vous êtes arrivés au restaurant. Vous prenez une table.\n");
                        pourcentage_d_amour = 0;
                        quitter = 1;
                    }
                    
                        while (quitter == 1)
                                {
                                    printf ("Que souhaitez-vous faire ?\n(1) Parler du temps qu'il fait.\n(2) Parler du film SF que vous adorez.\n(3) Lui demander de parler de son metier.\n");
                                    scanf ("%d", &choixResto);
                                    
                                    if (choixResto == 1 && meteo == 3)
                                        {
                                            printf ("Vous racontez une blague sur la meteo, elle tombe a l'eau mais vous dites qu'un sourire de sa part pourrait ensolleiller votre soiree !\nSophie vous regarde fixement et s'en va.\nVous n'avez aucun humour, ca n'a pas l'air de lui avoir plu... (comme la pluie)\n");
                                            quitter = 3;
                                        }
                                    
                                    if (choixResto == 1 && meteo == 2)
                                        {
                                            printf ("Vous lui demandez qui est Evelyne Dheliat.\nElle vous repond : 'Non mais attends, tu ne connais pas Evelyne Dheliat ?! La meilleure presentatrice meteo sur Terre ? Tu perds beaucoup de points j'ai envie de partir...'\nAie coup dur... Voulez-vous essayer de faire une blague sur la meteo pour calmer l'atmosphere ?\n");
                                            meteo = meteo + 1;
                                            pourcentage_d_amour = pourcentage_d_amour - 5;
                                        }
                                    
                                    if (choixResto == 1 && meteo == 1)
                                        {
                                            printf ("Vous lui demandez ce qu'il lui plait dans la meteo.\nElle vous repond : 'J'ai toujours ete une grande admiratrice d'Evelyne Dheliat, ca fait du bien d'en parler !\nVous trouvez ca encore plus bizarre, mais ca lui plait aussi ! Cependant vous vous demandez qui est Evelyne Dheliat.\n ");
                                            meteo = meteo + 1;
                                            pourcentage_d_amour = pourcentage_d_amour + 20;
                                        }
                                    if (choixResto == 1 && meteo == 0)
                                        {
                                            printf ("Vous lui parlez du temps qu'il fait.\nOui il a fait super beau aujourd'hui ! J'adore la meteo, quand j'etais petite je voulais etre presentatrice !\nVous trouvez ça bizarre, mais ca lui plait !\n");
                                            meteo = meteo + 1;
                                            pourcentage_d_amour = pourcentage_d_amour + 30;
                                        }
                                        
                                    if (choixResto == 2 && film == 2)
                                        {
                                            printf ("Vous lui parlez encore une fois de SF.\nTu n'as que ce sujet de conversation là ?! Je prefere partir.\nElle est partie... Il fallait peut-etre parler de meteo.\n");
                                            quitter = 3;
                                        }
                                        
                                    if (choixResto == 2 && film == 1)
                                        {
                                            printf ("Vous lui reparlez des films SF.\nElle vous repond : 'Je n'aime vraime vraiment pas ce genre de films, alors que la meteo...\nLa SF ne lui plait vraiment pas, mais pourquoi parle-t-elle de meteo ?...");
                                            film = film + 1;
                                        }
                                        
                                    if (choixResto == 2 && film == 0)
                                        {
                                            printf ("Vous lui parlez de votre film SF favori.\nElle vous repond : 'De la SF ?! C'est vraiment un truc de gamin, vous avez quel age deja ?\nAie ca n'a pas l'air de lui plaire...\n");
                                            pourcentage_d_amour = pourcentage_d_amour + 10;
                                            film = film + 1;
                                            
                                        }
                                        
                                    if (choixResto == 3 && metier == 2)
                                        {
                                            printf ("Vous lui demandez encore des précisions sur son travail.\nElle soupire puis s'en va en vous disant : 'Je suis desolee mais je ne suis pas ici pour parler de mon travail, on se revoit plus tard !\n\nAie coup dur !... Elle ne vous a plus donne signe de vie depuis cette soiree...");
                                            quitter = 3;
                                        }
                                        
                                    if (choixResto == 3 && metier == 1)
                                        {
                                            printf ("Vous lui demandez des précisions sur sa vie de mannequin.\nElle vous repond : 'Ce n'est pas facile tous les jours mais j'espere devenir un jour aussi connue qu'Evelyne Dheliat ! Mais arretons de parler de mon travail, ca commencer a me metrre mal a l'aise...\nCa lui a plu mais nous devrions peut-etre arreter de parler de son travail.\n");
                                            pourcentage_d_amour = pourcentage_d_amour + 5;
                                            metier = metier + 1;
                                        }
                                        
                                    if (choixResto == 3 && metier == 0)
                                        {
                                            printf ("Vous lui parlez de son metier.\nDans la vie je suis mannequin, je passe dans tous les magazines, vous devriez etre tres heureux de m'avoir avec vous ce soir !\nVous ne l'avez jamais vue de toute votre vie, mais ça à l'air de lui plaire !\n");
                                            pourcentage_d_amour = pourcentage_d_amour + 15;
                                            metier = metier + 1;
                                        }
                                        
                                    if (pourcentage_d_amour >= 65)
                                        {
                                            printf ("\nSophie vous dit : 'J'ai passe une excellente soiree, merci beaucoup ! Cependant je pense que je vais m'en aller ! Tu es une personne formidable ! Merci encore !'\nIl vous reste a savoir qui va payer...\n");
                                            quitter = 0;
                                            while (quitter == 0)
                                                {
                                                    printf ("Il vous reste %d€ que voulez-vous faire ?\n(1) Tout payer (50€)\n(2) Faire moitie-moitie (25€)\n(3) Laisser Sophie tout payer (0€)\n", argent);
                                                    scanf ("%d", &quiPaye);
                                                    if (quiPaye == 1 && argent >= 50)
                                                        {
                                                            printf ("Waouh merci beaucoup ca me gene ! Merci mille fois ! On se revoit tres bientot je l'espere !\nElle vous embrasse et, suite au rendez-vous, continue de vous revoir regulierement ! C'est du serieux !\nVous avez fait la meilleure fin ! Felicitations !");
                                                            quitter = 8;
                                                        }
                                                    
                                                    if (quiPaye == 1 && argent < 50)
                                                        {
                                                            printf ("Vous n'avez pas assez ! Choississez une autre option.\n");
                                                        }
                                                    
                                                    if (quiPaye == 2 && argent >= 25)
                                                        {
                                                            printf ("Super ça me va ne t'inquietes pas ! J'ai passé une superbe soiree avec toi j'espere qu'on se reverra ! A plus !\nPlusieurs jours se sont ecoules et vous avez recu une invitation au mariage de Sophie, spoiler : ce n'est pas vous le mari.\nVous avez bien fini le rendez-vous mais il existe une meilleure fin !");
                                                            quitter = 8;
                                                            
                                                        }
                                                        
                                                    if (quiPaye == 2 && argent < 25)
                                                        {
                                                            printf ("Vous n'avez pas assez ! Choississez une autre option.\n");
                                                        }
                                                        
                                                    if (quiPaye == 2 && argent >= 0)
                                                        {
                                                            printf ("Sophie s'arrête de sourire, paie puis s'en va s'en dire un mot. Plusieurs jours se sont ecoules et toujours aucune nouvelles du mannequin...\nVous avez perdu !");
                                                            quitter = 8;
                                                            
                                                        }
                                                }
                                        }
                                        
                                        if (quitter == 3)
                                            {
                                                printf ("Sophie est partie, vous avez perdu !...");
                                                quitter = 8;
                                            }
                                }
        } 
        
    if (choix == 2)
        { 
            printf ("Vous décidez d'appeler Marilyn. Elle accepte le rendez-vous avec plaisir ! \n");
            while (quitter != 1)
                {
                    printf ("Vous avez %d€ sur vous, où souhaitez-vous aller ?\n(1) Chez le Fleuriste ?\n(2) Aller acheter des pâtisseries ?\n(3) Rejoindre Marilyn ?\n ", argent);
                    scanf ("%d", &choixAchat);
                    
                    while (choixAchat == 1)
                        {
                            printf ("Vous êtes chez le fleuriste, que souhaitez-vous faire ?\n(1) Acheter une seule rose rouge à 3€ ?\n(2) Acheter un bouquet de roses rouges à 15€ ?\n(3) Quitter les lieux ?\n ");
                            scanf ("%d", &choixFleurs);
                            if (choixFleurs == 1 && argent < 3)
                                {
                                    printf ("Vous n'avez plus d'argent... Vous ne pouvez pas acheter cette rose rouge...\n");
                                }
                                
                            if (choixFleurs == 1 && argent>=3)
                                {
                                    printf ("Vous achetez une rose rouge au fleuriste, j'espère que ça va lui plaire !\n");
                                    rose = rose + 1;
                                    argent = argent - 3;
                                }
                                    
                            if (choixFleurs == 2 && argent < 15)
                                {
                                    printf ("Vous n'avez pas assez d'argent pour acheter ces fleurs...\n");
                                }
                                
                            if (choixFleurs == 2 && argent >= 15)
                                {
                                    printf ("Vous achetez un énorme bouquet de roses rouges au fleuriste, ça va forcément lui plaire, il est magnifique !\n");
                                    bouquet = bouquet + 1;
                                    argent = argent - 15;
                                }
                            
                            if (choixFleurs == 3)
                                {
                                    printf ("Vous quittez les lieux.\n");
                                    choixAchat = 0;
                                    printf ("Vous avez %d€ sur vous, où souhaitez-vous aller ?\n(1) Chez le Fleuriste ?\n(2) Aller acheter des pâtisseries ?\n(3) Rejoindre Marilyn ?\n ", argent);
                                    scanf ("%d", &choixAchat);
                                }
                            
                            
                            
                        }
                        
                    while (choixAchat == 2)
                        {
                            printf ("Vous êtes chez le pâtissier, que souhaitez-vous faire ?\n(1) Acheter un éclair au café à 5€ ?\n(2) Acheter une boîte de chocolats à 10€ ?\n(3) Quitter les lieux ?\n ");
                            scanf ("%d", &choixPatissier);
                            if (choixPatissier == 1 && argent < 5)
                                {
                                    printf ("Vous n'avez plus d'argent... Vous ne pouvez pas acheter cet éclair au café...\n");
                                }
                                
                            if (choixPatissier == 1 && argent>=5)
                                {
                                    printf ("Vous achetez un éclair au café, il sent si bon ! J'espère qu'elle va l'aimer !\n");
                                    eclair = eclair + 1;
                                    argent = argent - 5;
                                }
                                    
                            if (choixPatissier == 2 && argent < 10)
                                {
                                    printf ("Vous n'avez pas assez d'argent pour acheter ces merveilleux chocolats...\n");
                                }
                                
                            if (choixPatissier == 2 && argent >= 10)
                                {
                                    printf ("Vous achetez une énorme boîte de chocolats, ça va forcément lui plaire, ils ont l'air si bon !\n");
                                    boite_chocolat = boite_chocolat + 1;
                                    argent = argent - 10;
                                }
                            
                            if (choixPatissier == 3)
                                {
                                    printf ("Vous quittez les lieux.\n");
                                    choixAchat = 0;
                                    printf ("Vous avez %d€ sur vous, où souhaitez-vous aller ?\n (1) Chez le Fleuriste ?\n (2) Aller acheter des pâtisseries ?\n (3) Rejoindre Marilyn ?\n ", argent);
                                    scanf ("%d", &choixAchat);
                                }
                                

                        }
                    
                    if (choixAchat == 3)
                        {
                            printf ("Vous décidez de rejoindre Marilyn.\n");
                            quitter = 1;
                        }
        
                }
                
                printf ("Vous voilà enfin devant Marilyn !\n");
                while (quitter == 1)
                    {
                        printf ("Que souhaitez-vous faire ?\n(1) La complimenter.\n(2) Lui offrir une rose rouge.\n(3) Lui offrir un bouquet de roses rouges.\n(4) Lui offrir un éclair au café.\n(5) Lui offrir une boîte en chocolat.\n");
                        scanf("%d", &choixRDV);
                        
                        if (choixRDV == 1 && compliment == 4)
                            {
                                printf ("Bon excuse-moi mais je préfère m'en aller.. On se voit plus tard, enfin...Peut-être...\nElle est partie et ne semble ne plus vouloir nous voir...\n");
                                quitter = 0;
                            }
                        if (choixRDV == 1 && compliment == 3)
                            {
                                printf ("Bon s'il-te-plaît tu pourrais arrêter ? Je suis mal à l'aise...\nOh non je vais tout gâcher...\n");
                                compliment = compliment + 1;
                            }
                        
                        if (choixRDV == 1 && compliment == 2)
                            {
                                printf ("Ce n'est pas que je n'apprecie pas mais pourrais-tu arrêter s'il-te-plaît ? Tu commences à me gêner...!\nAïe on dirait qu'elle commence à ne plus trop apprécier...\n");
                                pourcentage_d_amour = pourcentage_d_amour + 5;
                                compliment = compliment + 1;
                            }
                            
                        if (choixRDV == 1 & compliment == 1)
                            {
                                printf ("Ca fait vraiment plaisir d'entendre ca ! Merci beaucoup !\n");
                                printf ("Elle a apprécié le compliment !");
                                pourcentage_d_amour = pourcentage_d_amour + 15;
                                compliment = compliment + 1;
                            }
                            
                        if (choixRDV == 1 && compliment == 0)
                            {
                                printf ("Merci pour ce compliment ! Tu n'es pas mal non plus haha !\n");
                                printf ("Ca lui a fait super plaisir et on a recu un compliment aussi !\n");
                                pourcentage_d_amour = pourcentage_d_amour + 25;
                                compliment = compliment + 1;
                            }
                            
                        if (choixRDV == 2 && rose > 0)
                            {
                                printf ("Vous lui donnez une rose rouge.\nJe suis vraiment désolée mais je n'aime pas les roses, je prefere les tulipes...\nElle n'a pas beaucoup apprecie...\n");
                                pourcentage_d_amour = pourcentage_d_amour + 5;
                                rose = rose - 1;
                            }
                            
                        if (choixRDV == 2 && rose <= 0)
                            {
                                printf ("Vous n'avez pas de roses sur vous...\n");
                            }
                            
                        if (choixRDV == 3 && bouquet > 0)
                            {
                                printf ("Vous lui donnez un bouquet de roses rouges.\nJe deteste vraiment les roses, elles nuient a mon inspiration d'artiste. Je suis desolee mais je me dois de les refuser...\nGros coup dur mais on peut la comprendre !\n");
                                pourcentage_d_amour = pourcentage_d_amour + 5;
                                bouquet = bouquet - 1;
                            }
                            
                        if (choixRDV == 3 && bouquet <= 0)
                            {
                                printf ("Vous n'avez pas de bouquet sur vous...\n");
                            }
                            
                        if (choixRDV == 4 && eclair > 0)
                            {
                                printf ("Vous lui donnez un eclair au cafe.\nJ'aime vraiment les patisseries et surtout celles au cafe ! Merci beaucoup !\nElle apprecie beaucoup le geste ! Ca fait plaisir a voir !\n");
                                eclair = eclair - 1;
                                pourcentage_d_amour = pourcentage_d_amour + 20;
                            }
                            
                        if (choixRDV == 4 && eclair <= 0)
                            {
                                printf ("Vous n'avez pas d'eclair au cafe...\n");
                            }
                            
                        if (choixRDV == 5 && boite_chocolat > 0)
                            {
                                printf ("Vous lui donnez la boite aux chocolats.\n\nOh la la merci beaucoup ! J'adore les chocolats ! Tu gagnes beaucoup de points !\nElle a adore ce geste ! Elle est adorable !\n");
                                boite_chocolat = boite_chocolat - 1;
                                pourcentage_d_amour = pourcentage_d_amour + 30;
                            }
                        
                        if (choixRDV == 5 && boite_chocolat <= 0)
                            {
                                printf ("Vous n'avez pas de boite aux chocolats...\n");
                            }
                            
                        if (pourcentage_d_amour >= 100)
                            {
                                printf ("Marilyn vous dit : 'Tu me plais beaucoup ! Ca te dirait de manger avec moi au restaurant ?'\nAccepter ou refuser son offre ?\n(1) Accepter.\n(2) Refuser.\n");
                                scanf ("%d", &choixRestaurant);
                                
                                if (choixRestaurant == 1)
                                    {
                                        printf ("\nSuper ca me fait trop plaisir ! Allons-y dans ce cas !\n");
                                        quitter = 4;
                                    }
                                
                                if (choixRestaurant == 2)
                                    {
                                        printf ("Bon tant pis... J'espère que l'on se reverra dans ce cas à très bientôt !...");
                                        defaite = 1;
                                    }
                            }
                    }
                
                if (quitter == 4)
                    {
                        printf ("Vous êtes arrivés au restaurant. Vous prenez une table.\n");
                        pourcentage_d_amour = 0;
                        quitter = 1;
                    }
                    
                while (quitter == 1)
                        {
                            printf ("Que souhaitez-vous faire ?\n(1) Parler du temps qu'il fait.\n(2) Parler du film SF que vous adorez.\n(3) Lui demander de parler de son metier.\n");
                            scanf ("%d", &choixResto);
                            
                            if (choixResto == 1 && meteo == 3)
                                {
                                    printf ("Vous racontez une blague sur la meteo, elle tombe a l'eau mais vous dites qu'un sourire de sa part pourrait ensolleiller votre soiree !\nMarilyn vous regarde fixement et s'en va.\nVous n'avez aucun humour, ca n'a pas l'air de lui avoir plu... (comme la pluie)\n");
                                    quitter = 0;
                                }
                            
                            if (choixResto == 1 && meteo == 2)
                                {
                                    printf ("Vous etes encore une fois tetu et parlez de meteo.\n Si j'entends le mot 'meteo' encore une fois je m'en vais\nAie coup dur... Voulez-vous essayer de faire une blague sur la meteo pour calmer l'atmosphere ?\n");
                                    meteo = meteo + 1;
                                    pourcentage_d_amour = pourcentage_d_amour - 5;
                                }
                            
                            if (choixResto == 1 && meteo == 1)
                                {
                                    printf ("Vous lui parlez encore de meteo.\n Elle vous repond : 'Dis moi t'es plutot tetu, ma patience a des limites, dis-moi si tu t'ennuies...'\nJe pense qu'elle s'est vexée... Nous devrions changer de sujet de conversation...\n ");
                                    meteo = meteo + 1;
                                    pourcentage_d_amour = pourcentage_d_amour - 20;
                                }
                            if (choixResto == 1 && meteo == 0)
                                {
                                    printf ("Vous lui parlez du temps qu'il fait.\nNiveau sujet de conversation on a connu mieux quand meme non ? Haha !\nElle a raison d'un cote... Essayons autre chose.\n");
                                    meteo = meteo + 1;
                                    pourcentage_d_amour = pourcentage_d_amour + 10;
                                }
                                
                            if (choixResto == 2 && film == 2)
                                {
                                    printf ("Vous lui demandez qui est cet acteur.\nElle vous regarde fixement puis s'en va.\nVous ne comprenez pas, mais oui elle était sérieuse.\n");
                                    quitter = 0;
                                }
                                
                            if (choixResto == 2 && film == 1)
                                {
                                    printf ("Vous lui reparlez des films SF.\nElle vous repond : 'C'est vraiment cool moi mon prefere c'est celui avec Georges McCarthy dedans ! Attention si tu me dis que tu ne connais pas je m'en vais ! Haha !'\nVous ne connaissez pas du tout cet acteur...\n");
                                    film = film + 1;
                                    pourcentage_d_amour = pourcentage_d_amour + 30;
                                }
                                
                            if (choixResto == 2 && film == 0)
                                {
                                    printf ("Vous lui parlez de votre film SF favori.\nElle vous repond : 'De la SF ?! J'adore ce style de film ! Il faut qu'on se fasse un cinema si tu veux !\nCa lui plait beaucoup !\n");
                                    pourcentage_d_amour = pourcentage_d_amour + 15;
                                    film = film + 1;
                                    
                                }
                                
                            if (choixResto == 3 && metier == 2)
                                {
                                    printf ("Vous lui demandez encore des précisions sur son travail.\nElle soupire puis s'en va en vous disant : 'Je suis desolee mais je ne suis pas ici pour parler de mon travail, on se revoit plus tard !\nAie coup dur !... Elle ne vous a plus donne signe de vie depuis cette soiree...");
                                    quitter = 0;
                                }
                                
                            if (choixResto == 3 && metier == 1)
                                {
                                    printf ("Vous lui demandez des précisions sur sa vie d'artiste'.\nElle vous repond : 'Ce n'est pas facile tous les jours mais j'espere devenir un jour aussi connue que Picasso ! Mais arretons de parler de mon travail, ca commence a me metrre mal a l'aise...\n\nCa lui a plu mais nous devrions peut-etre arreter de parler de son travail.\n");
                                    pourcentage_d_amour = pourcentage_d_amour + 10;
                                    metier = metier + 1;
                                }
                                
                            if (choixResto == 3 && metier == 0)
                                {
                                    printf ("Vous lui parlez de son metier.\nDans la vie je suis artiste j'adore mon travail qui me laisse travailler mon imagination !\nVous ecoutez avec attention ce qu'elle dit, mais ça à l'air de lui plaire !\n");
                                    pourcentage_d_amour = pourcentage_d_amour + 10;
                                    metier = metier + 1;
                                }
                                
                            if (pourcentage_d_amour >= 65)
                                {
                                    printf ("\nMarilyn vous dit : 'J'ai passe une excellente soiree, merci beaucoup ! Cependant je pense que je vais m'en aller ! Tu es une personne formidable ! Merci encore !'\nIl vous reste a savoir qui va payer...\n");
                                    quitter = 2;
                                    while (quitter == 2)
                                        {
                                            printf ("Il vous reste %d€ que voulez-vous faire ?\n(1) Tout payer (50€)\n(2) Faire moitie-moitie (25€)\n(3) Laisser Sophie tout payer (0€)\n", argent);
                                            scanf ("%d", &quiPaye);
                                            if (quiPaye == 1 && argent >= 50)
                                                {
                                                    printf ("Waouh merci beaucoup ca me gene ! Merci mille fois ! On se revoit tres bientot je l'espere !\nElle vous embrasse et, suite au rendez-vous, continue de vous revoir regulierement ! C'est du serieux !\nVous avez fait la meilleure fin ! Felicitations !");
                                                    quitter = 8;
                                                }
                                            
                                            if (quiPaye == 1 && argent < 50)
                                                {
                                                    printf ("Vous n'avez pas assez ! Choississez une autre option.\n");
                                                }
                                            
                                            if (quiPaye == 2 && argent >= 25)
                                                {
                                                    printf ("Super ça me va ne t'inquietes pas ! J'ai passé une superbe soiree avec toi j'espere qu'on se reverra ! A plus !\nPlusieurs jours se sont ecoules et vous avez recu une invitation au mariage de Sophie, spoiler : ce n'est pas vous le mari.\nVous avez bien fini le rendez-vous mais il existe une meilleure fin !");
                                                    quitter = 8;
                                                    
                                                }
                                                
                                            if (quiPaye == 2 && argent < 25)
                                                {
                                                    printf ("Vous n'avez pas assez ! Choississez une autre option.\n");
                                                }
                                                
                                            if (quiPaye == 2 && argent >= 0)
                                                {
                                                    printf ("Sophie s'arrête de sourire, paie puis s'en va s'en dire un mot. Plusieurs jours se sont ecoules et toujours aucune nouvelles du mannequin...\nVous avez perdu !");
                                                    quitter = 8;
                                                    
                                                }
                                        }
                                }
                                
                                if (quitter == 0)
                                    {
                                        printf ("Marilyn est partie, vous avez perdu !...");
                                    }
                        }
        } 
}


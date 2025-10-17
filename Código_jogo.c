#include <stdio.h>
#include <string.h>
#include <stdlib.h> // para função rand()



int main(){
    int pv = 20, pvGrupo = 70, pvGrupo2 = 40;
    int lugar, decAA, decAAA, decEsc, decCri;
    int decAAB, decAAC, decAAAB, decAAAC;
    int obejeto, pedra, lugarB, lugarC, lugarD;
    int pvMonstro = 15, pvDragao = 44;
    char jogador [30];
    

    printf("*****************************************\n");
    printf("****** Bem vindo ao (nome do jogo) ******\n");
    printf("*****************************************\n\n");    

    printf("Digite o nome do seu personagem: ");
    fgets(jogador, sizeof(jogador), stdin);

    printf("INFOS\n");
    printf("Ola, %sVoce comeca com %d pontos de vida.\n", jogador, pv);

    // Inicio da história

    printf("Sob o sol escaldante, %s estava treinando com seu graveto. Sempre o fazia depois de ajudar seus pais com as tarefas da fazenda. Eles eram camponeses, mas o seu sonho era ser aventureiro. Em uma fatídica noite, uma chuva forte assolou o campo. Em meio a floresta, um raio acertou uma árvore que estava perto de %s o arremessando para longe. Um enorme brilho e calor foi presenciado. Grande parte da arvore fora vaporizada, onde apenas um tronco com quatro joias reluzentes sobrara. %s se aproximou e pode ver de perto que tipo de pedras eram. Uma verde, azul, vermelha e preta com pontos brancos. %s sentia grande magia vindo delas. E que apenas uma poderia pegar.\n", jogador, jogador, jogador, jogador);

	printf(" A - Pedra Verde\n ");
    printf(" B - Pedra Azul\n ");
    printf(" C - Pedra Vermelha\n ");
    printf(" D - Pedra Preta\n ");
    
    printf ("\nQual pedra %s escolhe?\n");
    scanf ("%d", &pedra);

    //escolha da pedra
    switch (pedra)
    {
    case 1:
        printf("Voce escolhou a Pedra Verde.\n");
        break;
    case 2:
        printf("Voce escolhou a Pedra Azul.\n");
        break;
    case 3: 
        printf("Voce escolhou a Pedra Vermelha.\n");
        break;
    default:
        printf("Voce escolhou a Pedra Preta.\n");
        break;
    }
    
    
    // Rota A
    if (pedra == 1){

        printf("Quando %s toca na pedra verde, uma enorme energia começa a emanar de dentro dela. Um raio de dentro da pedra atinge os céus, dissipando toda a tempestade. A pedra havia se transformado em uma espada de prata, com a joia verde no meio do cabo. %s podia sentir o poder emanando da espada. Sentiu que com essa espada poderia realizar seu sonho de ser tornar um grande aventureiro.\n", jogador, jogador);

        printf(" A. Para a Capital.\n ");
        printf(" B. Para o Bosque Sombrio\n");
        printf(" C. Para a Caverna da Solidão\n");
        printf(" D. Para as Montanhas de algodão doce\n");

	}
	
		printf("Para onde %s deveria ir?\n", jogador);
        scanf ("%d", &lugar);
        
	        switch (lugar)
	        {
	        case 1:
	            printf(" Voce escolhou ir para a capital.\n ");
	            break;
	        case 2:
	            printf(" Voce escolhou ir para o Bosque Sombrio.\n ");
	            break;
	        case 3: 
	            printf(" Voce escolhou ir para a Caverna da Solidão.\n ");
	            break;
	        default:
	            printf(" Voce escolhou ir para as Montanhas de algodão doce.\n ");
	            break;
	        }
    // rota A.A
        if (lugar == 1)
        {
            printf("%s decide ir para a capital. Onde poderá mostrar seus talentos para os mestres de guildas e começar sua história. Ao entrar na taberna de guildas %s vê uma garota de cabelos loiros atendendo os aventureiros e anotando seus nomes, \n", jogador, jogador, jogador);

            printf(" A. Pede para a garota o colocar em uma guilda.\n ");
            printf(" B. Flerta com a garota.\n");
            printf(" C. Pede uma cerveja\n");

            printf("\nO que %s faz\n?", jogador);
            scanf ("%d", &decAA);

            switch (decAA)
            {
            case 1:
                printf(" Voce escolheu pedir para a garota o colocar em uma guilda.\n ");
                break;
            case 2:
                printf(" Voce escolheu flertar com a garota.\n ");
                break;
            default:
                printf(" Voce escolheu pedir uma cerveja.\n ");
                break;
            }
    	}
            
            //rota A.A.A
            
            if (decAA == 1){

                printf(" Ao pedir para ela o inscrever em uma guilda. A garota observa por completo, desde o topo da cabeça até a sola dos pés. \n");
                printf(" Claire: Me chamo Claire. Estarei te guiando para a aventura que mais se enquadra em seus requisitos.\n");
                
                printf("A. UM DRAGÃO!\n");
                printf("B. Grandes criaturas, como trolls e Ogros.\n");
                printf("C. Quero lutar com criatura medianas, como Orcs e goblins.\n");
                printf("D. Não quero me arriscar, quero matar alguns slimes apenas.\n");
                
                printf(" Claire: Me diga o que gostaria de enfrentar?\n");
                scanf ("%d", &decCri);

                switch (decCri)
                {
                case 1:
                    printf(" Voce escolhou enfrentar um dragão.\n ");
                    break;
                case 2:
                    printf(" Voce escolhou enfrentar grandes criaturas, como trolls e ogros.\n ");
                    break;
                case 3:
                    printf(" Voce escolhou enfrentar criaturas medianas, como orcs e goblins.\n ");
                    break; 
                default:
                    printf(" Voce escolhou enfrentar slimes.\n ");
                    break;
                }
                
                //rota A.A.A.A
                    if (decCri == 1)
                    {
                        printf(" Claire: UM DRAGÃO!? ESTA LOUCO? ");

                        printf(" %s mostra que tem um olhar sério e que está disposto para  desafio. Claire o observa e aceita sua proposta.", jogador);

                        printf(" Claire: Sim, provavelmente está louco. Mas se é o que deseja tudo bem.\n");

                        printf(" Claire mostra um mapa para %s.\n  ", jogador);

                        printf(" Claire: Estas são as coordenas do último dragão visto. O dragão de Magma que assola as montanhas do norte. Se conseguir reunir uma equipe de grandes guerreiros, talvez tenham uma chance.\n" );

                        printf(" A. Vai sozinho");
                        printf(" B. Se junta a uma guilda.");
                        printf(" C. Pede para Claire ir com ele");
                        
                        printf(" O que %s faz?\n", jogador);
                        scanf ("%d", &decEsc);

                        switch (decEsc){
                        case 1:
                            printf(" Voce escolhou ir sozinho.\n ");
                            break;
                        case 2:
                            printf(" Voce escolhou se juntar a uma guilda.\n ");
                            break;
                        default:
                            printf(" Voce escolhou pedir para Claire ir com voce.\n ");
                            break;
                    	}
                	}
                
                    //rota A.A.A.A Esc 1
                        if (decEsc == 1)
                        {
                            printf(" Depois de uma viagem longa pelas montanhas nevoentas do norte. %s chega na toca do dragão. Sua espada toma um brilho forte e chama a atenção do dragão. O dragão no seu ninho de pedras negras acorda e vai na direção de %s. A batalha então se inicia.", jogador, jogador);
	                        // batalha contra o dragão
	                        for (int i = 0; i < 20; i++){
	                            printf(" %s ataca o dragao com sua espada. n", jogador);
	                            pvDragao -= rand() % 5;
	                            printf(" O dragao ataca %s com seu bafo de fogo. \n", jogador);
	                            pv -= rand() % 3;
	
	                            if (pvDragao <= 0)
	                            {
	                                printf(" %s vence o dragão lendario! Se torna o herói do reino e consegue alcançar seu tão almejado sonho.\n", jogador);
	
	                                printf("----------------------------GAME OVER--------------------------------\n");
	                                break;
	                            } else if (pv <= 0)
	                            {
	                                printf(" Os braços e pernas de %s sucumbem. Ele aceita por fim sua derrota que sela seu destino. As chamas cercaram o corpo de %s tirando a sua vida.\n", jogador, jogador);
	                                
	                                printf("----------------------------GAME OVER--------------------------------\n");
	                                break;
	                            }
	                        }
						}

                        
                    
                    //rota A.A.A.A Esc 2
                        if (decEsc == 2)
                        {
                            printf(" Claire: Muito bem! Temos um grupo chamado Os Lobos Prateados que estão indo em direção à toca do dragão. Vou te colocar junto deles. Vá até essas coordenadas com esse contrato. Tenho certeza de que qualquer ajudar será bem-vinda.\n");
                            printf(" %s avança até a localização e alcança o grupo. O líder parece não se importa com sua presença. Vocês correm a cavalo durante 2 dias e depois de uma viagem longa pelas montanhas nevoentas do norte. %s chega na toca do dragão. Sua espada toma um brilho forte e chama a atenção do dragão. O dragão no seu ninho de pedras negras acorda e vai na direção de vocês. A batalha então se inicia.\n", jogador, jogador);

                            //batalha ccontra o dragão em grupo
                            for (int i = 0; i < 20; i++){
                                printf(" O grupo de %s ataca o dragao. \n", jogador);
                                pvDragao -= rand() % 7;
                                printf(" O dragao ataca o grupo de %s com seu bafo de fogo. \n", jogador);
                                pvGrupo -= rand() % 20;

                                if (pvDragao <= 0)
                                {
                                    printf(" Cansados, porém vitoriosos! Assim definimos nossos heróis  se encontram depois da longa e árdua batalha. %s ganha seu lugar na guilda e depois de um tempo se torna o braço direito do líder: Rastonpuff. Os nomes de %s e os lobos prateados ecoaram por toda a eternidade. \n", jogador, jogador);

                                    printf("----------------------------GAME OVER--------------------------------\n");
                                    break;
                                } else if (pvGrupo <= 0)
                                {
                                    printf(" Jogados as cinzas. Os guerreiros sucumbem. Mais nenhum grito se ouve, apenas a chuva que apaga as brasas de suas peles queimadas. Ninguém lembrará os seus nomes.\n");

                                    printf("----------------------------GAME OVER--------------------------------\n");
                                    break;
                                }
                            }
                }

                    //rota A.A.A.A Esc 3
                        if (decEsc == 3){
                            
                            printf("Ela nega rapidamente. Porém, depois de %s insiste muito e prometer dividir a recompensa com ela, Claire começa a ceder e o acompanha. Ela pega seu machado azul brilhante e com um sonho de s tornar uma aventureira e não deixar aquele pobre coitado morrer. Eles partem para as montanhas.\n ", jogador);

                            printf("Vocês correm a cavalo durante 2 dias e depois de uma viagem longa pelas montanhas nevoentas do norte. %s chega na toca do dragão. Sua espada toma um brilho forte e chama a atenção do dragão. O dragão no seu ninho de pedras negras acorda e vai na direção de vocês. A batalha então se inicia.\n", jogador);

                            for (int i = 0; i < 20; i++){
                                printf(" %s e Claire atacam o dragao. n", jogador);
                                pvDragao -= rand() % 12;
                                printf(" O dragao ataca %s e Claire com seu bafo de fogo. \n", jogador);
                                pvGrupo2 -= rand() % 15;

                                if (pvDragao <= 0)
                                {
                                    printf(" Quando o dragão cai, os dois se olham exaustos. Enfim, conseguiram. Eles se abraçam e em meio campo de batalha, se beijam. Se tornam os nomes mais aclamados das terras do norte. %s e Claire: Os Guerreiros de prata. \n", jogador);

                                    printf("----------------------------GAME OVER--------------------------------\n");
                                    break;
                                } else if (pvGrupo2 <= 0)
                                {
                                    printf(" Os dois caem de joelhos, enquanto se olham e percebem o fim iminente. Não serão lembrados e muito menos honrados. Com um sopro da fera, evaporam na enorme inexistência.\n");

                                    printf("----------------------------GAME OVER--------------------------------\n");
                                    break;
                                }
                            }
                        }
                    
                // rota A.A.A.B
                    if (decCri == 2){
                        printf("Ao emegir na sua aventura com uma carta de recompensa em busca de trolls e Ogros, ele os encontra lutando entre si. Indignado, %s tenta entrar no meio da luta para acertar um golpe e  com um balançar da maça do troll voa em direção de %s. Os dois monstros se olham e continuam brigando, mas agora pra saber quem fica com o jantar \n", jogador, jogador);
                        printf("----------------------------GAME OVER--------------------------------\n");
                    }

                // rota A.A.A.C
                    if (decCri == 3){
                        printf("Isso não é Senhor do Anéis, ok?! Pois bem... Ele ganha uma carta de recompensa para Orcs e Goblins. %s vai até a floresta mais próxima. Lá, se encontrou em um labirinto, onde quanto mais andava mais se sentia leve. %s percebeu que seus pertences haviam sido levados, depois suas calças, camisa, seroulas. Já não tinha mais nem dignidade. Morreu pelado.\n", jogador, jogador);
                        printf("----------------------------GAME OVER--------------------------------\n");
                    }
                // rota A.A.A.D
                    if (decCri == 4){
                        printf("Oh, slimes? Hm ok… %s vai lá, corta uns slimes... mata os slimes, suja roupa de slime e sei la! Vende?! Come?! Brinca?! O que que da pra fazer com slimes em uma época medieval. Você pode enfrentar dragões e escolhe essa opção medíocre. A culpa é sua, não minha! Quer saber, toma aqui: “os slimes liberam uma fragrância toxica que entra nos seus pulmões e te mata lentamente.” Da próxima escolhe algo melhor.\n", jogador);
                        printf("----------------------------GAME OVER--------------------------------\n");
                    }

    }
    
		    //rota A.A.B
			            if (decAA == 2)
			            {
			                printf("%s diz coisas estravagantes para moça. Seu sorriso leve dava a entender que ela estava gostando. Até ela o jogar para fora da taverna, chamar os guardas e prende-lo por assédio sexual. Que coisa feia...\n", jogador);
			                printf("----------------------------GAME OVER--------------------------------\n");
			            }
			
			//rota A.A.C
			            if (decAA == 3)
			            {
			                printf("%s descobre um fraco por alcool. Se vicia rapidamente e se torna um bebum. Agora, perambula pela cidade e diz pros outros que o que estragou sua carreira de aventureiro foi o joelho ruim.\n", jogador);
			                printf("----------------------------GAME OVER--------------------------------\n");
			            }

        
    	//rota A.B (bosque sombrio)
        if (lugar == 2)
        {
            printf (" %s vai até o bosque sombrio. Quando chega, cheio de coragem. A tremenda magia assola sua espada e faz com que ele perca sua força. Monstros vindos da escuridão o arrastam e o devoram. \n", jogador);
            printf ("----------------------------GAME OVER--------------------------------\n");
        }
        
        //rota A.C (caverna da solidão)
        if (lugar == 3)
        {
            printf("%s vi até a caverna da solidão. E fica sozinho. Pra sempre. Que decisão mais estupida...\n", jogador);
            printf("----------------------------GAME OVER--------------------------------\n");
        }

        //rota A.D (montanhas de algodão doce)
        if (lugar == 4)
        {
            printf ("%s vai até as montanhas e vive feliz pra sempre. Ou até os 22. Ele morreu de diabete.\n", jogador);
            printf("----------------------------GAME OVER--------------------------------\n");
        }

        // fim da rota A






















return 0;
}
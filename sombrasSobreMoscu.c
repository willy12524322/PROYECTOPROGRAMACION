#include <stdio.h>
#include <stdlib.h>

/* ---------- Variables globales del grupo ---------- */
int capitulo = 1;

/* ---------- Prototipos ---------- */

void controlarProgreso();
void capituloAlvaro();
void capituloAndre();
void capituloMikhail();
int tomaDeDecisiones(const char *opcion1, const char *opcion2);
void capituloReencuentro();
void capituloBunker();


/* ---------- main ---------- */
int main() {
    int opcion = 0;

    while (opcion != 2) {
        printf("\n===== SOMBRAS SOBRE MOSCU =====\n");
        printf("Rusia, 2041. Una bomba cayo sobre la ciudad al amanecer.\n");
        printf("Quienes sobrevivieron a la explosion ahora enfrentan algo\n");
        printf("peor: la gente empieza a transformarse en criaturas.\n");
        printf("1) Jugar\n");
        printf("2) Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            capitulo = 1;
            controlarProgreso();
        } else if (opcion != 2) {
            printf("Opcion invalida.\n");
        }
    }

    printf("Gracias por jugar. Moscu queda en silencio otra vez...\n");
    return 0;
}

/* ---------- Control del progreso de la historia ---------- */
void controlarProgreso() {
    while (capitulo <= 5) {
        switch (capitulo) {
            case 1:
                capituloAlvaro();
                break;
            case 2:
                capituloAndre();
                break;
            case 3:
                capituloMikhail();
                break;
            case 4:
                capituloReencuentro();
                break;
            case 5:
                capituloBunker();
                break;
        }
        capitulo++;
    }
}

/* ---------- Toma de decisiones generica ---------- */
int tomaDeDecisiones(const char *opcion1, const char *opcion2) {
    int opcion;
    printf("1) %s\n", opcion1);
    printf("2) %s\n", opcion2);
    printf("Elige una opcion: ");
    scanf("%d", &opcion);

    while (opcion != 1 && opcion != 2) {
        printf("Opcion invalida. Intenta de nuevo: ");
        scanf("%d", &opcion);
    }
    return opcion;
}

/* ---------- Capitulo de Alvaro ---------- */
void capituloAlvaro() {
    int decision;

    printf("\n=== Capitulo 1: Alvaro ===\n");
    printf("Dia 1. Alvaro trabaja en una oficina en el centro de Moscu\n");
    printf("cuando una explosion sacude el edificio. El techo se derrumba\n");
    printf("y el humo lo cubre todo. Debe decidir rapido.\n");
    
    decision = tomaDeDecisiones("Salir corriendo del edificio en llamas",
                                 "Refugiarse en el sotano del edificio");
    if (decision == 1) {
        printf("Alvaro escapa entre escombros y vidrios rotos hacia la calle.\n");
    } else {
        printf("Alvaro se esconde en el sotano hasta que todo se calma y luego sale a la calle.\n");
    }

    printf("\nDia 2. Afuera, algunas personas ya no parecen humanas:\n");
    printf("se mueven raro y no responden cuando Alvaro les habla.\n");
    printf("Necesita comida y un lugar seguro antes de que anochezca.\n");
    
    decision = tomaDeDecisiones("Correr hacia la estacion de metro mas cercana",
                                 "Saquear el supermercado de la esquina");
    if (decision == 1) {
        printf("Alvaro baja las escaleras y llega a los andenes del metro buscando refugio.\n");
    } else {
        printf("Alvaro entra al supermercado y consigue provisiones a contrarreloj.\n");
    }

    printf("\nDia 3. Tras dias oculto, Alvaro logra salir a la superficie devastada.\n");
    printf("Una manada de criaturas bloquea el puente, pero hay rutas alternas.\n");

    decision = tomaDeDecisiones("Atravesar la zona abierta corriendo con precaucion",
                                 "Intentar escalar los andamios de un edificio destruido");
    if (decision == 1) {
        printf("Alvaro corre con agilidad y logra esquivar a las criaturas en el puente.\n");
    } else {
        printf("Alvaro trepa con exito por los escombros y evita la zona de peligro.\n");
    }
}

/* ---------- Capitulo de Andre ---------- */
void capituloAndre() {
    int decision;

    printf("\n=== Capitulo 2: Andre ===\n");
    printf("Dia 1. Andre viaja en el metro de Moscu cuando la explosion\n");
    printf("corta la energia. El tren se detiene a mitad de un tunel oscuro\n");
    printf("y los pasajeros empiezan a entrar en panico en el interior del vagon.\n");
    
    decision = tomaDeDecisiones("Forzar las puertas del vagon para salir a las vias",
                                 "Esperar dentro del vagon a los equipos de rescate");
    if (decision == 1) {
        printf("Andre logra abrir las puertas y aterriza directamente en las oscuras vias del tunel.\n");
    } else {
        printf("Andre espera en el vagon, pero al disiparse el humo decide abrir las puertas y baja a las vias.\n");
    }

    printf("\nDia 2. En la oscuridad del tunel, Andre escucha pasos que no son humanos.\n");
    printf("Algo se arrastra entre los rieles, cada vez mas cerca.\n");
    
    decision = tomaDeDecisiones("Correr por los rieles hacia la superficie",
                                 "Esconderse dentro de otro vagon abandonado en el tunel");
    if (decision == 1) {
        printf("Andre corre sin mirar atras por el tunel hasta alcanzar una salida de emergencia.\n");
    } else {
        printf("Andre se mete a otro vagon en silencio hasta que la amenaza se aleja por los rieles.\n");
    }

    printf("\nDia 3. Andre vaga por los suburbios destruidos y avanza con cautela.\n");
    printf("Encuentra una vieja ruta de escape junto a las vias del tren ligero.\n");

    decision = tomaDeDecisiones("Seguir el camino abierto bordeando las vias",
                                 "Rodear el perimetro por una alcantarilla secundaria");
    if (decision == 1) {
        printf("Andre avanza con sigilo y logra dejar atras la zona de conflicto.\n");
    } else {
        printf("Andre encuentra la entrada de la alcantarilla y logra avanzar a salvo.\n");
    }
}

/* ---------- Capitulo de Mikhail ---------- */
void capituloMikhail() {
    int decision;

    printf("\n=== Capitulo 3: Mikhail ===\n");
    printf("Dia 1. Mikhail conducia por las afueras de Moscu cuando vio\n");
    printf("el resplandor de la explosion en el horizonte. El cielo se\n");
    printf("llena de un hongo oscuro que crece sobre la ciudad.\n");

    decision = tomaDeDecisiones("Correr hacia un refugio antiaereo cercano",
                                 "Conducir hacia el bosque, lejos de la ciudad");
    if (decision == 1) {
        printf("Mikhail llega al refugio subterraneo justo a tiempo antes del caos exterior.\n");
    } else {
        printf("Mikhail conduce a toda velocidad con su auto hacia la espesura del bosque.\n");
    }

    printf("\nDia 2. Cerca del bosque, Mikhail se topa con un grupo\n");
    printf("de infectados que vagan sin rumbo entre los arboles.\n");

    decision = tomaDeDecisiones("Pelear con una barra de metal que lleva en el auto",
                                 "Huir en silencio por la maleza sin llamar su atencion");
    if (decision == 1) {
        printf("Mikhail logra abrirse paso tras un enfrentamiento tenso y agotador.\n");
    } else {
        printf("Mikhail se aleja despacio por la espesura evitando el combate directo.\n");
    }

    printf("\nDia 3. En medio de la ventisca nocturna, Mikhail avanza por caminos rurales.\n");
    printf("Debe decidir si buscar una zona alta o una cabana cercana.\n");

    decision = tomaDeDecisiones("Buscar refugio en una estructura elevada y segura",
                                 "Buscar una cabana abandonada para pasar la noche");
    if (decision == 1) {
        printf("Mikhail asegura el perimetro elevado y descansa protegido del frio.\n");
    } else {
        printf("Mikhail se refugia en la cabana y pasa la noche a salvo del exterior.\n");
    }
}

/* ---------- Capitulo 4: El Reencuentro ---------- */
void capituloReencuentro() {
    int decision;

    printf("\n===== CAPITULO 4: EL REENCUENTRO =====\n");
    printf("Siguiendo las senales de radio, Alvaro, Andre y Mikhail logran\n");
    printf("encontrarse en las afueras de la ciudad. Sin embargo, las criaturas\n");
    printf("los han seguido hasta el perimetro del viejo búnker.\n");
    printf("Tienen que decidir como afrontar esta primera emboscada:\n\n");

    decision = tomaDeDecisiones(
        "Atacar frontalmente a la horda para asegurar el perimetro juntos",
        "Tomar rutas separadas para distraer a las criaturas y despistarlas"
    );

    if (decision == 1) {
        printf("\nLos tres se lanzan de frente contra la horda para limpiar el camino.\n");
        printf("La lucha es brutal y desesperada, logrando dispersar a los monstruos,\n");
        printf("pero Alvaro queda atrapado bajo unos escombros y no logra sobrevivir.\n");
        printf("Andre y Mikhail consiguen escapar y se adentran en el búnker.\n");
    } else {
        printf("\nCada uno toma un flanco distinto para dividir la atencion de la horda.\n");
        printf("El plan funciona para despistar a los infectados, pero Mikhail es\n");
        printf("sorprendido en un callejon sin salida y pierde la vida.\n");
        printf("Alvaro y Andre logran reunirse y cruzar hacia el interior del búnker.\n");
    }
}

/* ---------- Capitulo 5: El Búnker y Finales ---------- */
void capituloBunker() {
    int decision;

    printf("\n===== CAPITULO 5: EL INTERIOR DEL BÚNKER =====\n");
    printf("Ya dentro de las instalaciones subterraneas, los sobrevivientes restantes\n");
    printf("intentan sellar las compuertas principales. De pronto, la tension aumenta\n");
    printf("cuando escuchan ruidos mecanicos y pasos al otro lado del panel de control.\n");
    printf("Deben tomar la decision definitiva para resolver su situacion:\n\n");

    decision = tomaDeDecisiones(
        "Activar el sistema de energia secundaria para desplegar trampas electricas",
        "Huir a toda prisa hacia los túneles inferiores mas profundos"
    );

    if (decision == 1) {
        printf("\nSe activa el panel principal y una descarga electrica masiva barre el acceso,\n");
        printf("desintegrando a la horda por completo, pero una sobrecarga fulmina\n");
        printf("a otro de los sobrevivientes en el acto, dejando solo a uno con vida.\n");
        printf("Ahora solo Andre queda con vida.\n");
    } else {
        printf("\nLos sobrevivientes se precipitan a la carrera por los túneles inferiores.\n");
        printf("El búnker resulta ser una ratonera sin salida y las criaturas los acorralan.\n");
        printf("Ninguno logra salir con vida de la oscuridad.\n");
        printf("Moscu devora a los ultimos sobrevivientes en completo silencio.\n");
    }
    
    printf("\n======================================\n");
    printf("FIN\n");
    printf("======================================\n");
    exit(0);
}

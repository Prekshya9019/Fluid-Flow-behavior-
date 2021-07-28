#include <stdio.h>
void Type(float  Re);
void Explanation(float  p1, float  U1, float  L1, float  m1, float  p2, float  U2, float  L2, float  m2);

float  main(){
    char selected_option;
    float  L1, U1, p1, m1, Re1;
    float  L2, U2, p2, m2, Re2;
    float  L, U, p, m, Re;
    printf("What option would you like to choose: \n");
    printf("a. Finding out the behavior of the fluid.\n");
    printf("b. Comparing the behavior of the fluids in similar conditions.\n");
    scanf("%c", &selected_option);

    if (selected_option == 'a'){
        printf("Enter the fluid density of the fluid: ");
        scanf("%f", &p);
        printf("Enter the value of linear dimension of the fluid: ");
        scanf("%f", &L);
        printf("Enter the value of fluid velocity of the fluid: ");
        scanf("%f", &U);
        printf("Enter the value of dynamic viscosity of the fluid: ");
        scanf("%f", &m);
        Re = (float)(p * U * L)/m;
        Type(Re);
    }

    else if (selected_option == 'b'){

        printf("Enter the parameters for the first fluid: \n");

        printf("Enter the fluid density of the fluid: ");
        scanf("%f", &p1);
        printf("Enter the value of linear dimension of the fluid: ");
        scanf("%f", &L1);
        printf("Enter the value of fluid velocity of the fluid: ");
        scanf("%f", &U1);
        printf("Enter the value of dynamic viscosity of the fluid: ");
        scanf("%f", &m1);
        Re1 = (float )(p1 * U1 * L1)/m1;

        printf(" For the first fluid: \n");
        Type(Re1);

        printf("Enter the parameters for the second fluid: \n");

        printf("Enter the fluid density of the fluid: ");
        scanf("%f", &p2);
        printf("Enter the value of linear dimension of the fluid: ");
        scanf("%f", &L2);
        printf("Enter the value of fluid velocity of the fluid: ");
        scanf("%f", &U2);
        printf("Enter the value of dynamic viscosity of the fluid: ");
        scanf("%f", &m2);
        Re2 = (float )(p2 * U2 * L2)/m2;

        printf(" For the second fluid: \n");
        Type(Re2);


        Explanation(p1,U1,L1,m1,p2,U2,L2,m2);

    }

}

void Type(float Re){
    if (Re > 4000){
        printf("The fluid is turbulent.\n");
        printf("\n");
    }
    else if (Re < 2000){
        printf("The fluid is laminar.\n");
        printf("\n");
    }
    else {
        printf("The fluid is in transition.\n");
        printf("\n");
    }
}

void Explanation(float  p1, float  U1, float L1 , float  m1, float  p2, float  U2, float  L2, float  m2){
    if (p1 == p2){
        printf("The densities are equal. \n");
    }else if (p2 > p1){
        printf("The first condition to be considered in the flow of these fluids is that the density of the second fluid is  greater than that of the first fluid. This means that the particles are more tightly packed together in the second fluid, meaning more order. Therefore, if it is not influenced by other parameters, the second fluid is more likely to be more laminar than the first fluid.\n");
    } else if (p1 > p2){
        printf("The first condition to be considered in the flow of  these fluids is that the density of the first fluid is  greater than that of the second fluid. This means that the particles are more tightly packed together, meaning more order. Therefore, if it is not influenced by other parameters, the first fluid is more likely to be more laminar than the second fluid.\n");
    }

    printf("\n");

    if (U1 == U2){
        printf("Here is the velocities are equal.\n");
    } else if (U2>U1){
        printf("Here, the second fluid velocity being greater than the first fluid velocity signifies that the particles\n move more haphazardly in the fluid having higher velocity. Therefore, if not influenced by any other parameters, this should contribute more to the turbulence of second fluid rather than the turbulence of first fluid.\n");
    } else if (U1 > U2){
        printf("Here, the first fluid velocity being greater than the second fluid velocity signifies that the particles move more haphazardly in the fluid having higher velocity. Therefore, if not influenced by any other parameters, this should contribute more to the turbulence of first fluid rather than the turbulence of second fluid.\n");
    }

    printf("\n");

    if (L1 == L2){
        printf("The linear dimensions are equal.\n");
    }else if (L2 > L1){
        printf("Here, the second linear dimension being greater than the first linear dimension signifies that the particles move in a less constricting space in the second fluid than the first fluid, leaving it more room to move freely. Therefore, if not influenced by any other parameters, this should contribute more to the turbulence of second fluid rather than the turbulence of first fluid.\n");
    }else if (L1 > L2){
        printf("Here, the first linear dimension being greater than the second linear dimension signifies that the particles move in a less constricting space in the first fluid than the second fluid, leaving it more room to move freely. Therefore, if not influenced by any other parameters, this should contribute more to the turbulence of first fluid rather than the turbulence of second fluid.\n");
    }

    printf("\n");

    if (m1 == m2){
        printf("The viscosities are equal.\n");
    } else if (m2 > m1){
        printf("As with the case of linear dimesion, viscosity also constricts the movement of the fluid. Therefore, as the second viscosity being greater than the first viscosity signifies that the particles move more restrictively in the second fluid than the first fluid. Therefore, if not influenced by any other parameters, this should contribute more to the turbulence of first fluid rather than the turbulence of second fluid.\n");
    } else if (m1 > m2){
        printf("As with the case of linear dimesion, viscosity also constricts the movement of the fluid. Therefore, as the first viscosity being greater than the second viscosity signifies that the particles move more restrictively in the first fluid than the second fluid. Therefore, if not influenced by any other parameters, this should contribute more to the turbulence of second fluid rather than the turbulence of first fluid.\n");
    }
    printf("These factors affect the way the fluid flows, thus giving the result.");
}



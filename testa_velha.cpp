/**
 * Copyright 2021 Rafael Mascarenhas Dal Moro - License at Repository's markdown
 * Trabalho 1 - Metodos de Programacao
 * Autor: Rafael Mascarenhas Dal Moro
 * Matricula: 17/0021041
 * \file  testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Testa velha", "[single-file]") {
    int vitoriaX_1[3][3]= {   { 2, 0, 1 },
	                          { 2, 0, 1 },
						      { 0, 2, 1 }
    };
	int vitoriaX_2[3][3]= {   { 2, 1, 2 },
	                          { 2, 1, 0 },
						      { 0, 1, 2 }
    };
	int vitoriaX_3[3][3]= {   { 1, 0, 2 },
	                          { 1, 2, 0 },
						      { 1, 2, 2 }
    };
	int vitoriaX_4[3][3]= {   { 1, 0, 2 },
	                          { 2, 1, 0 },
						      { 2, 2, 1 }
    };
	int vitoriaX_5[3][3]= {   { 2, 0, 1 },
	                          { 2, 1, 0 },
						      { 1, 2, 2 }
    };
	int vitoriaX_6[3][3]= {   { 1, 1, 1 },
	                          { 2, 0, 0 },
						      { 0, 2, 2 }
    };
	int vitoriaX_7[3][3]= {   { 0, 2, 0 },
	                          { 1, 1, 1 },
						      { 0, 2, 2 }
    };
	int vitoriaX_8[3][3]= {   { 0, 2, 0 },
	                          { 2, 0, 2 },
					          { 1, 1, 1 }
    };
	int vitoriaO_1[3][3]= {   { 1, 0, 2 },
	                          { 1, 0, 2 },
						      { 0, 1, 2 }
    };
	int vitoriaO_2[3][3]= {   { 1, 2, 0 },
	                          { 1, 2, 0 },
						      { 0, 2, 1 }
    };
	int vitoriaO_3[3][3]= {   { 2, 0, 0 },
	                          { 2, 1, 0 },
						      { 2, 1, 1 }
    };
	int vitoriaO_4[3][3]= {   { 2, 0, 0 },
	                          { 1, 2, 0 },
						      { 1, 1, 2 }
    };
	int vitoriaO_5[3][3]= {   { 1, 0, 2 },
	                          { 1, 2, 0 },
						      { 2, 1, 1 }
    };
	int vitoriaO_6[3][3]= {   { 2, 2, 2 },
	                          { 1, 1, 0 },
						      { 2, 1, 1 }
    };
	int vitoriaO_7[3][3]= {   { 0, 1, 0 },
	                          { 2, 2, 2 },
						      { 2, 1, 1 }
    };
	int vitoriaO_8[3][3]= {   { 0, 1, 0 },
	                          { 1, 0, 1 },
						      { 2, 2, 2 }
    };
    /* REQUIRE(VerificaVelha(vitoriaX_1) == 1);
    REQUIRE(VerificaVelha(vitoriaX_2) == 1);
    REQUIRE(VerificaVelha(vitoriaX_3) == 1);
    REQUIRE(VerificaVelha(vitoriaX_4) == 1);
    REQUIRE(VerificaVelha(vitoriaX_5) == 1);
    REQUIRE(VerificaVelha(vitoriaX_6) == 1);
    REQUIRE(VerificaVelha(vitoriaX_7) == 1);
    REQUIRE(VerificaVelha(vitoriaX_8) == 1); */
	REQUIRE(VerificaVelha(vitoriaO_1) == 2);
	REQUIRE(VerificaVelha(vitoriaO_2) == 2);
    REQUIRE(VerificaVelha(vitoriaO_3) == 2);
    REQUIRE(VerificaVelha(vitoriaO_4) == 2);
    REQUIRE(VerificaVelha(vitoriaO_5) == 2);
    REQUIRE(VerificaVelha(vitoriaO_6) == 2);
    REQUIRE(VerificaVelha(vitoriaO_7) == 2);
    REQUIRE(VerificaVelha(vitoriaO_8) == 2);
}

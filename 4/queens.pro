%queens

menaces(C, []).
menaces(piece(C1, R1), [piece(C2, R2)|XS]) :- R1 =\= R2, R2-R1 =\= abs(C2-C1), menaces(piece(C1, R1), XS).


board(piece(C1, R1), piece(C2, R2), piece(C3, R3), piece(C4, R4), piece(C5, R5), piece(C6, R6), piece(C7, R7), piece(C8, R8). 

check([]).
check([piece(C1, R1) | XS]) :- check(XS), member(R1, [1,2,3,4,5,6,7,8]), menaces(piece(C1, R1), XS).
range(L,U,L) :- L =< U.
range(L,U,X) :- L < U, N is L + 1, range(N,U,X).

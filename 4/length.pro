mylength([],0).
mylength([_|T],N) :- mylength(T, M), N is M + 1.

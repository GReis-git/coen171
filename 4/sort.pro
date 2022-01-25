% quicksort(X, Y)

quicksort([], []).
quicksort([X|XS], Y) :- partition(X, XS, A, B), quicksort(A, AS), quicksort(B, BS), append(AS, [X|BS], Y).


% partition(_, [], [], [])
% this solution of partition given in class

partition(_, [], [], []).
partition(P, [X|XS], [X|YS], ZS) :- X < P, partition(P, XS, YS, ZS).
partition(P, [X|XS], YS, [X|ZS]) :- X >= P, partition(P, XS, YS, ZS).
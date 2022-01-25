%node(L, X, R)


% insert(node, X, node)
insert(node(L, X, R), X, node(L, X, R)).
insert(node(L, Y, R), X, node(LS, Y, R)) :- X<Y, insert(L, X, LS).
insert(node(L, Y, R), X, node(L, Y, RS)) :- X>Y, insert(R, Y, RS).

% exists(_, node(L, X, R))
exists(X, node(_, X, _)).
exists(X, node(L, Y, _)) :- exists(X, L), X<Y.
exists(X, node(_, Y, R)) :- exists(X, R), Y<X.
del(_,[],[]).
del(X,[X|Tail],R):-
    del(X,Tail,R).
del(X,[Y|Tail],[Y|R]):-
    X\=Y,
    del(X,Tail,R).
